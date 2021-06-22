// Copyright (C) Microsoft Corporation. All rights reserved.

#ifndef TEST_FABRIC_ASYNC_OPERATION_H
#define TEST_FABRIC_ASYNC_OPERATION_H


#include "fabriccommon.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TEST_FABRIC_ASYNC_OPERATION_TAG* TEST_FABRIC_ASYNC_OPERATION_HANDLE;

TEST_FABRIC_ASYNC_OPERATION_HANDLE test_fabric_async_operation_create(void);
void test_fabric_async_operation_destroy(TEST_FABRIC_ASYNC_OPERATION_HANDLE test_fabric_async_operation);
HRESULT test_fabric_async_operation_BeginTestOperation(TEST_FABRIC_ASYNC_OPERATION_HANDLE test_fabric_async_operation, int arg1, IFabricAsyncOperationCallback* callback, IFabricAsyncOperationContext** context);
HRESULT test_fabric_async_operation_EndTestOperation(TEST_FABRIC_ASYNC_OPERATION_HANDLE test_fabric_async_operation, IFabricAsyncOperationContext* context, int* operation_result);
HRESULT test_fabric_async_operation_BeginTestOperationWithNoBeginArgs(TEST_FABRIC_ASYNC_OPERATION_HANDLE test_fabric_async_operation, IFabricAsyncOperationCallback* callback, IFabricAsyncOperationContext** context);
HRESULT test_fabric_async_operation_EndTestOperationWithNoBeginArgs(TEST_FABRIC_ASYNC_OPERATION_HANDLE test_fabric_async_operation, IFabricAsyncOperationContext* context, int* operation_result_1, double* operation_result_2);
HRESULT test_fabric_async_operation_BeginTestOperationWithNoEndArgs(TEST_FABRIC_ASYNC_OPERATION_HANDLE test_fabric_async_operation, int arg1, IFabricAsyncOperationCallback* callback, IFabricAsyncOperationContext** context);
HRESULT test_fabric_async_operation_EndTestOperationWithNoEndArgs(TEST_FABRIC_ASYNC_OPERATION_HANDLE test_fabric_async_operation, IFabricAsyncOperationContext* context);
HRESULT test_fabric_async_operation_BeginTestOperationWithNoArgs(TEST_FABRIC_ASYNC_OPERATION_HANDLE test_fabric_async_operation, IFabricAsyncOperationCallback* callback, IFabricAsyncOperationContext** context);
HRESULT test_fabric_async_operation_EndTestOperationWithNoArgs(TEST_FABRIC_ASYNC_OPERATION_HANDLE test_fabric_async_operation, IFabricAsyncOperationContext* context);

#ifdef __cplusplus
}
#endif

#endif /* TEST_FABRIC_ASYNC_OPERATION_H */
