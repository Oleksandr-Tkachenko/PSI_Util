/* 
 * File:   psi_misc.h
 * Author: Oleksandr Tkachenko <oleksandr.tkachenko at crisp-da.de>
 *
 * Created on May 5, 2016, 12:12 AM
 */

#ifndef PSI_MISC_H 
#define PSI_MISC_H 

#include <glib-2.0/glib.h> 
#include <sys/stat.h> 
#include <string.h> 
#include <stdio.h> 
#include <errno.h> 
#include <stdlib.h> 
#include <stdint.h> 

#ifdef __cplusplus 
extern "C" {
#endif 

    typedef enum PSI_Hashing_Module {
        PSI_Cuckoo_Hashing, PSI_Simple_Hashing
    } PSI_Hashing_Module;

    off_t fsize(const char *filename);
    void get_bucket_path(gboolean a, char* buffer, char* folder, uint16_t n);
    void psi_mkdir(char* path);
    void slice_alloc_byte_buffer(uint8_t *** buffer, size_t n1, size_t n2);
    uint8_t ** slice_alloc_byte_buffer_new(size_t n1, size_t n2);
    void slice_free_byte_buffer(uint8_t *** buffer, size_t n1, size_t n2);
    void slice_alloc_char_buffer(char *** buffer, size_t n1, size_t n2);
    void slice_free_char_buffer(char *** buffer, size_t n1, size_t n2);
    void atob(char* string, uint8_t* binary);
    FILE * psi_try_fopen(char * path, char * settings);
    void print_byte_buf(uint8_t * buf, size_t n);
    void psi_reduce_elems_16_to_10_bytes(char * path, PSI_Hashing_Module module);
    void xor10_elem(uint8_t * get, uint8_t * put);

#ifdef __cplusplus 
}
#endif 

#endif /* PSI_MISC_H */

