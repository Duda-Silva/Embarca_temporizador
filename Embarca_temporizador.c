#include <stdio.h>
#include "pico/stdlib.h"

// Definição dos pinos dos LEDs
#define LED_VERMELHO 11
#define LED_AMARELO 12
#define LED_VERDE 13

// Variável para armazenar o estado atual do semáforo
volatile int estado = 0;

// Função de callback do temporizador
bool repeating_timer_callback(struct repeating_timer *t){
    //Alterna o estado do semáforo
    estado = (estado + 1) % 3;

    // Atualiza os LEDs de acordo com o estado atual
    gpio_put(LED_VERMELHO, estado == 0);
    gpio_put(LED_AMARELO, estado == 1);
    gpio_put(LED_VERDE, estado == 2);

    return true;// Retorna true para continuar o temporizador
}
int main(){
    // Inicializa a biblioteca padrão
    stdio_init_all();

    // Inicializa os pinos dos LEDs como saída
    gpio_init(LED_VERMELHO);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_init(LED_AMARELO);
    gpio_set_dir(LED_AMARELO, GPIO_OUT);
    gpio_init(LED_VERDE);
    gpio_set_dir(LED_VERDE, GPIO_OUT);
    
    // Configura o temporizador repetitivo
    struct repeating_timer timer;
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    // Loop principal
    while(true){
        printf("Semáforo em opração\n");
        sleep_ms(1000);
    }

}


