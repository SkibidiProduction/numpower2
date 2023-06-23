#ifndef NUMPOWER_GPU_ALLOC_H
#define NUMPOWER_GPU_ALLOC_H

#ifdef __cplusplus
extern "C" {
#endif

void NDArray_VMALLOC(void **target, unsigned int size);

void NDArray_VFREE(void *target);

void NDArray_VCHECK();

#ifdef __cplusplus
}
#endif

#endif //NUMPOWER_GPU_ALLOC_H