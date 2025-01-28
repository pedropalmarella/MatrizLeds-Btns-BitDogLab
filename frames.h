
#ifndef FRAMES_H // Guardas de inclusão

#define FRAMES_H

#include "pico/stdlib.h"

#define NUM_PIXELS 25


double teclaA_frame[25] = {0.0, 0.0, 0.0, 0.0, 0.0,
                           0.0, 0.0, 0.0, 0.0, 0.0,
                           0.0, 0.0, 0.0, 0.0, 0.0,
                           0.0, 0.0, 0.0, 0.0, 0.0,
                           0.0, 0.0, 0.0, 0.0, 0.0};

double teclaB_frame[25] = {1.0, 1.0, 1.0, 1.0, 1.0,
                           1.0, 1.0, 1.0, 1.0, 1.0,
                           1.0, 1.0, 1.0, 1.0, 1.0,
                           1.0, 1.0, 1.0, 1.0, 1.0,
                           1.0, 1.0, 1.0, 1.0, 1.0};

double teclaC_frame[25] = {0.8, 0.8, 0.8, 0.8, 0.8,
                           0.8, 0.8, 0.8, 0.8, 0.8,
                           0.8, 0.8, 0.8, 0.8, 0.8,
                           0.8, 0.8, 0.8, 0.8, 0.8,
                           0.8, 0.8, 0.8, 0.8, 0.8};

double teclaD_frame[25] = {0.5, 0.5, 0.5, 0.5, 0.5,
                           0.5, 0.5, 0.5, 0.5, 0.5,
                           0.5, 0.5, 0.5, 0.5, 0.5,
                           0.5, 0.5, 0.5, 0.5, 0.5,
                           0.5, 0.5, 0.5, 0.5, 0.5};

double teclaHASHTAG_frame[25] = {0.2, 0.2, 0.2, 0.2, 0.2,
                                 0.2, 0.2, 0.2, 0.2, 0.2,
                                 0.2, 0.2, 0.2, 0.2, 0.2,
                                 0.2, 0.2, 0.2, 0.2, 0.2,
                                 0.2, 0.2, 0.2, 0.2, 0.2};

double tecla1_frame6[25] = {0.0, 0.0, 0.0, 0.0, 1.0,
                           //minha dir
                           0.0, 1.0, 0.0, 0.0, 0.0,
                           0.0, 0.0, 1.0, 0.0, 0.0,
                           //minha dir
                           0.0, 0.0, 0.0, 1.0, 0.0,
                           1.0, 0.0, 0.0, 0.0, 0.0};

double tecla1_frame7[25] = {0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 1.0, 0.0,
                            1.0, 1.0, 1.0, 1.0, 1.0,
                            0.0, 0.0, 0.0, 1.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0};

double tecla1_frame1[25] = {0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 1.0, 1.0, 1.0, 0.0,
                            1.0, 0.0, 1.0, 0.0, 1.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0};

double tecla1_frame2[25] = {0.0, 0.0, 0.0, 0.0, 1.0,
                           //minha dir
                           0.0, 1.0, 0.0, 0.0, 0.0,
                           0.0, 0.0, 1.0, 0.0, 0.0,
                           //minha dir
                           0.0, 0.0, 0.0, 1.0, 0.0,
                           1.0, 0.0, 0.0, 0.0, 0.0};

double tecla1_frame3[25] = {0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 1.0, 0.0, 0.0, 0.0,
                            1.0, 1.0, 1.0, 1.0, 1.0,
                            0.0, 1.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0};

double tecla1_frame4[25] = {1.0, 0.0, 0.0, 0.0, 0.0,
                           //minha dir
                           0.0, 0.0, 0.0, 1.0, 0.0,
                           0.0, 0.0, 1.0, 0.0, 0.0,
                           //minha dir
                           0.0, 1.0, 0.0, 0.0, 0.0,
                           0.0, 0.0, 0.0, 0.0, 1.0};

double tecla1_frame5[25] = {0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            1.0, 0.0, 1.0, 0.0, 1.0,
                            0.0, 1.0, 1.0, 1.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0};

double tecla6_frame1[25] = {1.0, 0.0, 0.0, 0.0, 1.0,
                            0.0, 1.0, 0.0, 1.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 1.0, 0.0, 1.0, 0.0,
                            1.0, 0.0, 0.0, 0.0, 1.0};

double tecla6_frame2[25] = {0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 1.0, 0.0, 1.0, 0.0,
                            1.0, 0.0, 0.0, 0.0, 1.0,
                            0.0, 1.0, 0.0, 1.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0};

double tecla6_frame3[25] = {0.0, 1.0, 0.0, 1.0, 0.0,
                            1.0, 0.0, 0.0, 0.0, 1.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            1.0, 0.0, 0.0, 0.0, 1.0,
                            0.0, 1.0, 0.0, 1.0, 0.0};

double tecla6_frame4[25] = {0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            1.0, 0.0, 1.0, 0.0, 1.0,
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0};

double tecla6_frame5[25] = {0.0, 0.0, 0.0, 0.0, 0.0,
                            1.0, 0.0, 0.0, 0.0, 1.0,
                            0.0, 1.0, 0.0, 1.0, 0.0,
                            1.0, 0.0, 0.0, 0.0, 1.0,
                            0.0, 0.0, 0.0, 0.0, 0.0};

double tecla6_frame6[25] = {0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 1.0, 0.0, 1.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 1.0, 0.0, 1.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0};

double tecla5_frame1[25] = {1.0, 0.5, 0.0, 0.5, 1.0,
                            0.5, 0.0, 0.0, 0.0, 0.5,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.5, 0.0, 0.0, 0.0, 0.5,
                            1.0, 0.5, 0.0, 0.5, 1.0};

double tecla5_frame2[25] = {0.5, 0.0, 0.5, 0.0, 0.5,
                            0.0, 1.0, 0.0, 1.0, 0.0,
                            0.5, 0.0, 0.0, 0.0, 0.5,
                            0.0, 1.0, 0.0, 1.0, 0.0,
                            0.5, 0.0, 0.5, 0.0, 0.5};

double tecla5_frame3[25] = {0.0, 0.5, 1.0, 0.5, 0.0,
                            0.5, 0.0, 0.5, 0.0, 0.5,
                            1.0, 0.5, 0.0, 0.5, 1.0,
                            0.5, 0.0, 0.5, 0.0, 0.5,
                            0.0, 0.5, 1.0, 0.5, 0.0};

double tecla5_frame4[25] = {0.0, 1.0, 0.0, 1.0, 0.0,
                            1.0, 0.5, 0.5, 0.5, 1.0,
                            0.0, 0.5, 0.0, 0.5, 0.0,
                            1.0, 0.5, 0.5, 0.5, 1.0,
                            0.0, 1.0, 0.0, 1.0, 0.0};

double tecla5_frame5[25] = {0.5, 0.5, 0.5, 0.5, 0.5,
                            0.5, 1.0, 1.0, 1.0, 0.5,
                            0.5, 1.0, 0.0, 1.0, 0.5,
                            0.5, 1.0, 1.0, 1.0, 0.5,
                            0.5, 0.5, 0.5, 0.5, 0.5};

double tecla5_frame6[25] = {1.0, 0.0, 1.0, 0.0, 1.0,
                            0.0, 0.5, 0.5, 0.5, 0.0,
                            1.0, 0.5, 0.0, 0.5, 1.0,
                            0.0, 0.5, 0.5, 0.5, 0.0,
                            1.0, 0.0, 1.0, 0.0, 1.0};

double tecla3_frame1[25] = {0.0, 1.0, 1.0, 1.0, 0.0,
                            1.0, 0.0, 1.0, 0.0, 1.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 1.0, 0.0,
                            0.0, 1.0, 1.0, 0.0, 0.0};

double tecla3_frame2[25] = {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 1.0, 0.0, 0.0, 0.0,
                            1.0, 1.0, 1.0, 1.0, 1.0,
                            0.0, 1.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0};

double tecla3_frame3[25] = {0.0, 1.0, 0.0, 1.0, 0.0,
                            0.0, 1.0, 0.0, 1.0, 0.0,
                            0.0, 1.0, 0.0, 1.0, 0.0,
                            0.0, 1.0, 0.0, 1.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0};

double tecla3_frame4[25] = {0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0};

double tecla3_frame5[25] = {1.0, 0.0, 0.0, 0.0, 1.0,
                            1.0, 0.0, 0.0, 1.0, 1.0,
                            1.0, 0.0, 1.0, 0.0, 1.0,
                            1.0, 1.0, 0.0, 0.0, 1.0,
                            1.0, 0.0, 0.0, 0.0, 1.0};

double tecla3_frame6[25] = {0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0};

double tecla8_frame1[25] = {1.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 1.0,
                            1.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 1.0,
                            1.0, 0.0, 0.0, 0.0, 0.0};

double tecla8_frame2[25] = {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 1.0, 0.0,
                            0.0, 1.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 1.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0};

double tecla8_frame3[25] = {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0};

double tecla8_frame4[25] = {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 1.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 1.0, 0.0,
                            0.0, 1.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0};

double tecla8_frame5[25] = {0.0, 0.0, 0.0, 0.0, 1.0,
                            1.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 1.0,
                            1.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 1.0};

double tecla4_frame1[25] = {0.5, 1.0, 0.5, 1.0, 0.5,
                            0.5, 1.0, 0.5, 1.0, 0.5,
                            0.5, 1.0, 0.5, 1.0, 0.5,
                            0.5, 1.0, 0.5, 1.0, 0.5,
                            0.5, 1.0, 0.5, 1.0, 0.5};

double tecla4_frame2[25] = {1.0, 0.5, 0.0, 1.0, 0.5,
                            1.0, 0.5, 0.0, 1.0, 0.5,
                            1.0, 0.5, 0.0, 1.0, 0.5,
                            1.0, 0.5, 0.0, 1.0, 0.5,
                            1.0, 0.5, 0.0, 1.0, 0.5};

double tecla4_frame3[25] = {0.5, 0.0, 0.0, 0.5, 0.0,
                            0.5, 0.0, 0.0, 0.5, 0.0,
                            0.5, 0.0, 0.0, 0.5, 0.0,
                            0.5, 0.0, 0.0, 0.5, 0.0,
                            0.5, 0.0, 0.0, 0.5, 0.0};

double tecla4_frame4[25] = {0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 0.0, 1.0, 0.0, 0.0};

double tecla4_frame5[25] = {1.0, 1.0, 0.0, 1.0, 1.0,
                            1.0, 1.0, 0.0, 1.0, 1.0,
                            1.0, 1.0, 0.0, 1.0, 1.0,
                            1.0, 1.0, 0.0, 1.0, 1.0,
                            1.0, 1.0, 0.0, 1.0, 1.0};

double tecla4_frame6[25] = {0.0, 0.5, 0.0, 0.0, 0.5,
                            0.0, 0.5, 0.0, 0.0, 0.5,
                            0.0, 0.5, 0.0, 0.0, 0.5,
                            0.0, 0.5, 0.0, 0.0, 0.5,
                            0.0, 0.5, 0.0, 0.0, 0.5};

double tecla7_frame1[25] = {0.0, 0.7, 0.0, 0.7, 0.0,
                            0.7, 0.7, 0.7, 0.7, 0.7,
                            0.7, 0.7, 0.7, 0.7, 0.7,
                            0.0, 0.7, 0.7, 0.7, 0.0,
                            0.0, 0.0, 0.7, 0.0, 0.0};

double tecla7_frame2[25] = {0.0, 0.3, 0.0, 0.3, 0.0,
                            0.3, 0.3, 0.3, 0.3, 0.3,
                            0.3, 0.3, 0.3, 0.3, 0.3,
                            0.0, 0.3, 0.3, 0.3, 0.0,
                            0.0, 0.0, 0.3, 0.0, 0.0};

double letra_A[25] = {0.0, 0.0, 0.4, 0.0, 0.0,
                      0.0, 0.0, 0.4, 0.0, 0.0,
                      0.0, 0.4, 0.0, 0.4, 0.0,
                      0.0, 0.4, 0.4, 0.4, 0.0,
                      0.4, 0.0, 0.0, 0.0, 0.4};

double letra_V[25] = {0.4, 0.0, 0.0, 0.0, 0.4,
                      0.4, 0.0, 0.0, 0.0, 0.4,
                      0.4, 0.0, 0.0, 0.0, 0.4,
                      0.0, 0.4, 0.0, 0.4, 0.0,
                      0.0, 0.0, 0.4, 0.0, 0.0};

double letra_I[25] = {0.0, 0.4, 0.4, 0.4, 0.0,
                      0.0, 0.0, 0.4, 0.0, 0.0,
                      0.0, 0.0, 0.4, 0.0, 0.0,
                      0.0, 0.0, 0.4, 0.0, 0.0,
                      0.0, 0.4, 0.4, 0.4, 0.0};

double letra_O[25] = {     0.0, 0.4, 0.4, 0.4, 0.0,
                           0.4, 0.0, 0.0, 0.0, 0.4,
                           0.4, 0.0, 0.0, 0.0, 0.4,
                           0.4, 0.0, 0.0, 0.0, 0.4,
                           0.0, 0.4, 0.4, 0.4, 0.0};

double letra_L[25] = {     0.4, 0.0, 0.0, 0.0, 0.0,
                           0.0, 0.0, 0.0, 0.0, 0.4,
                           0.4, 0.0, 0.0, 0.0, 0.0,
                           0.0, 0.0, 0.0, 0.0, 0.4,
                           0.4, 0.4, 0.4, 0.4, 0.4};

double letra_M[25] = {
    0.4, 0.0, 0.0, 0.0, 0.4,  // Linha 4 (topo)
    0.4, 0.4, 0.0, 0.4, 0.4,  // Linha 3
    0.4, 0.0, 0.4, 0.0, 0.4,  // Linha 2
    0.4, 0.0, 0.0, 0.0, 0.4,  // Linha 1
    0.4, 0.0, 0.0, 0.0, 0.4   // Linha 0 (base)
};

double letra_N[25] = {
    0.4, 0.0, 0.0, 0.0, 0.4,  // Linha 4 (topo)
    0.4, 0.0, 0.0, 0.4, 0.4,  // Linha 3
    0.4, 0.0, 0.4, 0.0, 0.4,  // Linha 2
    0.4, 0.4, 0.0, 0.0, 0.4,  // Linha 1
    0.4, 0.0, 0.0, 0.0, 0.4   // Linha 0 (base)
};

                        
double letra_D[25] = {
    0.4, 0.4, 0.4, 0.4, 0.0,  // Linha 4 (topo)
    0.4, 0.0, 0.0, 0.0, 0.4,  // Linha 3
    0.4, 0.0, 0.0, 0.0, 0.4,  // Linha 2
    0.4, 0.0, 0.0, 0.0, 0.4,  // Linha 1
    0.4, 0.4, 0.4, 0.4, 0.0   // Linha 0 (base)
};




                                                
#endif

