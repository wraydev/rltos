/**
 * @defgroup Rltos_core Core
 * The group containing the core workings of the RLTOS system - namely tasks and the task scheduler.
 * @defgroup Rltos_task Task
 * The group defining the RLTOS raw kernel tasks.
 * @ingroup Rltos_core
 * @addtogroup Rltos_task_api Task API
 * The public API (interface) to the RLTOS kernela tasks.
 * @ingroup Rltos_task
 * @{
 */

#ifndef RLTOS_TASK_H_
#define RLTOS_TASK_H_

#include "rltos_port.h"

/** @struct dummy_task_t
 * @brief Dummy task structure guaranteed to be the same size as a task control structure.
 * 
 * This is used to hide the implementation of a real task control structure - and allow static allocation of tasks.
 */
typedef struct
{
	stack_ptr_type dummy0;
	void (*dummy1)(void);
	rltos_uint dummy2[3];
	void * dummy3[6];
}dummy_task_t;

/** @struct dummy_task_list_t
 * @brief Dummy task list structure guaranteed to be the same size as a task list structure.
 * 
 * This is used to hide the implementation of a real task list structure - and allow static allocation of tasks.
 */
typedef struct
{
	void * dummy1[2];
	rltos_uint dummy0;
}dummy_task_list_t;

/** @enum rltos_err_t
 * @brief Enumerated type to store RLTOS error code
 */
typedef enum
{
	RLTOS_SUCCESS = 0U, /**< Success*/
	RLTOS_MEMORY_ERR,	/**< Memory Error has occured/been detected*/
}rltos_err_t;

/** @brief pointer to dummy task structure*/
typedef dummy_task_t * p_dummy_task_t;

/** @brief  pointer to dummy task list structure*/
typedef dummy_task_list_t * p_dummy_task_list_t;

/** @brief Enters RLTOS kernel and starts scheduler timer. 
 * Should not return from this function, if we do the only possible reason for it is:
 * 1. The dummy types sizes do not match the real types internally.
*/
void Rltos_kernel_enter(void);

/** @brief Cleanup of RLTOS kernel and stops scheduler timer. */
void Rltos_kernel_kill(void);

/** @brief Initialises task control structure, stack & appends to task list.
 * @param[inout] task_to_create - pointer to dummy task structure from which to create the task.
 * @param[in] p_stack_top - pointer to the top of the stack.
 * @param[in] p_task_f - function pointer to the task entry function.
 * @param[in] run_task - flag indicating whether to initialise the task to running or let it idle.*/
void Rltos_task_create(p_dummy_task_t const task_to_create, stack_ptr_type const p_stack_top, p_task_func_t const p_task_func, bool const run_task);

/** @brief Deinitialises task control structure, and removes from any lists.
 * @param[inout] task_to_destroy - pointer to dummy task structure which represents the task to destroy.
 * @note Never call this function on the currently running task - the behaviour is undefined.*/
void Rltos_task_destroy(p_dummy_task_t const task_to_destroy);

/** @brief Stops the targetted task indefinitely.
 * @param[in] task_to_stop - Pointer to the task to stop.*/
void Rltos_task_stop(p_dummy_task_t const task_to_stop);

/** @brief Resumes the targetted task in the stop state.
 * @param[in] task_to_resume - Pointer to the task to resume.*/
void Rltos_task_resume(p_dummy_task_t const task_to_resume);

/** @brief Puts the current thread to sleep for a minimum of the given number of ticks
 * @param[in] tick_count - The number of RLTOS ticks which the task will be placed in the idle list. If this value is 0 - this function call resolves to a yield.*/
void Rltos_task_sleep(const rltos_uint tick_count);

#endif /* RLTOS_TASK_H_ */

/*! @} */
