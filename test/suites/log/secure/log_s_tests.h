/*
 * Copyright (c) 2018, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef __LOG_S_TESTS_H__
#define __LOG_S_TESTS_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "test/framework/test_framework.h"

/**
 * \brief Register testsuite for audit logging secure interface.
 *
 * \param[in] p_test_suite The test suite to be executed.
 */
void register_testsuite_s_log_interface(struct test_suite_t *p_test_suite);

#ifdef __cplusplus
}
#endif

#endif /* __LOG_S_TESTS_H__ */
