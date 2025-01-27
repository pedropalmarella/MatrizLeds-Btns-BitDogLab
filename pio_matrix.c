#include <stdio.h>
#include <stdlib.h>
#include "pico/stdlib.h"
#include "hardware/clocks.h"
#include "pico/bootrom.h"
#include "pio_matrix.pio.h" 
#include "init_GPIO.h"//biblioteca que inicializa teclado e o botao
#include "frames.h"//biblioteca com os frames
#include "config_leds.h"//biblioteca com a config dos leds

//Debounce (em milissegundos)
#define DEBOUNCE_TIME 150

//função principal
int main()
{
    // Inicializa todos os códigos stdio padrão que estão ligados ao binário.
    stdio_init_all();
    init_GPIO();
    
    PIO pio = pio0; 
    uint32_t valor_led;
    double r = 0.0, b = 0.0 , g = 0.0; 
    bool ok;
    ok = set_sys_clock_khz(128000, false);//coloca a frequência de clock para 128 MHz, facilitando a divisão pelo clock    

    //configurações da PIO
    uint offset = pio_add_program(pio, &pio_matrix_program);
    uint sm = pio_claim_unused_sm(pio, true);
    pio_matrix_program_init(pio, sm, offset, OUT_PIN);

    while (true) 
    {
        if(!gpio_get(BTN_A) && (!gpio_get(BTN_B))){

            /*setar_leds_azul(tecla8_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame3, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame4, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame5, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame4, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame3, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(tecla8_frame1, valor_led, pio, sm, r, g, b); */
            //setar_leds_azul(letra_A, valor_led, pio, sm, r, g, b);
            //sleep_ms(200);
            /*setar_leds_azul(letra_O, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(letra_L, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(letra_I, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(letra_V, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(letra_I, valor_led, pio, sm, r, g, b);
            sleep_ms(200);
            setar_leds_azul(letra_A, valor_led, pio, sm, r, g, b);
            sleep_ms(200);*/
            setar_leds_azul(letra_A, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_azul(letra_M, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_azul(letra_A, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_azul(letra_N, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_azul(letra_D, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
            setar_leds_azul(letra_A, valor_led, pio, sm, r, g, b);
            sleep_ms(500);
        }
        else if(!gpio_get(BTN_A)){
            setar_leds_azul(tecla1_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_azul(tecla1_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_azul(tecla1_frame3, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_azul(tecla1_frame4, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_azul(tecla1_frame5, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_azul(tecla1_frame6, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_azul(tecla1_frame7, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_azul(tecla1_frame4, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
        }
        else if(!gpio_get(BTN_B)){
            setar_leds_vermelho(tecla7_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_vermelho(tecla7_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_vermelho(tecla7_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_vermelho(tecla7_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_vermelho(tecla7_frame1, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
            setar_leds_vermelho(tecla7_frame2, valor_led, pio, sm, r, g, b);
            sleep_ms(375);
        }
        else if(!gpio_get(JSTICK)){
            reset_usb_boot(0, 0);
        }
        else{
            setar_leds_todas_cores(teclaA_frame, valor_led, pio, sm, r, g, b);
        }
        //tempo de debounce para o botão
        sleep_ms(DEBOUNCE_TIME);
        printf("\nfrequência de clock %ld\r\n", clock_get_hz(clk_sys));
    }
}
