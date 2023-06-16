#ifndef PHPSCI_NDARRAY_DEBUG_H
#define PHPSCI_NDARRAY_DEBUG_H

#include "ndarray.h"

void NDArray_Dump(NDArray* array);
char* print_matrix(double* buffer, int ndims, int* shape, int* strides, int num_elements, int device);
void NDArrayIterator_DUMP(NDArray *a);

#endif //PHPSCI_NDARRAY_DEBUG_H
