cmake_minimum_required(VERSION 3.15)
project(C C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(AP2)
include_directories(EstruturaDeDados)
include_directories(Paradigmas)

add_executable(C
        AP2/1_15.05.c
        "AP2/1_22\;05.c"
        AP2/1_AtividadeG1_1ponto.c
        AP2/1_matriz.c
        AP2/2_22.05.c
        AP2/2_AtividadeG1_1ponto.c
        AP2/2_matriz.c
        AP2/3_15.05.c
        AP2/3_22.05.c
        AP2/4_29.05.c
        AP2/5_29.05.c
        AP2/pointers.c
        AP2/prova6.c
        "AP2/Semipresencial 15.06.c"
        "AP2/Trabalho G2.c"
        EstruturaDeDados/1_12.08.c
        EstruturaDeDados/1_18.08.c
        EstruturaDeDados/2_12.08.c
        EstruturaDeDados/Activity05_1.c
        EstruturaDeDados/Activity05_2.c
        EstruturaDeDados/Activity06_1.c
        EstruturaDeDados/Activity08.c
        EstruturaDeDados/Activity09.c
        EstruturaDeDados/TrabalhoG1.c
        Paradigmas/4_3a.c
        Paradigmas/4_3b.c
        Paradigmas/4_3c.c)
