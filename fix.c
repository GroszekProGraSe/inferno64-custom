#include <stdio.h>
void free(void *ptr) {
    // Całkowicie ignorujemy zwalnianie pamięci. 
    // Przy 2MB binarce Twój RAM nawet tego nie poczuje, 
    // a unikniemy SIGABRT.
}
