# Temporizador Periódico

## Descrição
Este projeto visa criar um semáforo utilizando um temporizador periódico com a função `add_repeating_timer_ms()` do Pico SDK. O semáforo alterna entre as cores vermelha, amarela e verde a cada 3 segundos. O desenvolvimento foi realizado utilizando um microcontrolador Raspberry Pi Pico W, 3 LEDs e 3 resistores de 330 Ω.

## Objetivos
- Implementar um semáforo com temporização de 3 segundos para cada alteração de sinal.
- Utilizar a função de callback do temporizador para alternar os estados dos LEDs.
- Imprimir uma mensagem na porta serial a cada segundo.

## Componentes Necessários
1. Microcontrolador Raspberry Pi Pico W.
2. 03 LEDs (vermelho, amarelo e verde).
3. 03 Resistores de 330 Ω.

## Requisitos
1. O acionamento dos LEDs deve iniciar na cor vermelha, alterando para amarela e, em seguida, verde.
2. O temporizador deve ser ajustado para um atraso de 3 segundos (3.000ms).
3. A mudança de estado dos LEDs deve ser implementada na função de callback do temporizador.
4. A rotina principal deve imprimir uma mensagem a cada segundo (1.000 ms).

## Estrutura do Projeto

Embarca_temporizador/
├── includes/             # Cabeçalhos das funções
│   └── ...
├── src/                  # Implementação das funções
│   └── Embarca_temporizador.c
├── build/                # Arquivos compilados (gerado pelo CMake)
├── CMakeLists.txt          # Configuração do CMake
├── pico_sdk_import.cmake   # Importação do SDK do Pico
├── README.md               # Documentação do projeto
├── wokwi.toml              # Configuração do simulador Wokwi
├── diagram.json          # Arquivo de configuração do circuito
└── img/                   # Imagens e diagramas
    └── ...                # Arquivos de imagem (.png, .jpg, .svg, etc.)

## Tecnologia Utilizada
- **Linguagem de Programação:** C
- **IDE:** Visual Studio Code
- **SDK:** Pico SDK
- **Simulador:** Wokwi
- **Controle de Versão:** Git
- **Plataforma de Hospedagem:** GitHub

## Como Executar o Projeto
1. Clone o repositório:
   ```sh
   git clone https://github.com/Duda-Silva/Embarca_temporizador.git
   
   cd temporizador-one-shot
   
   Compile o projeto

   Simulação wokwi  - clique no arquivo diagram.json para se conduzido a simulação, ter play para iniciar a simulação no wokwi.
    
