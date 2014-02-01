/** MobiCore driver module.(interface to the secure world SWD)
 * @addtogroup MCD_MCDIMPL_KMOD_IMPL
 * @{
 * @file
 * MobiCore Driver Kernel Module.
 *
 * <!-- Copyright Giesecke & Devrient GmbH 2009-2012 -->
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/module.h>

#include "main.h"
#include "debug.h"


/**
 * Map a virtual memory buffer structure to Mobicore
 * @param instance
 * @param addr		address of the buffer(NB it must be kernel virtual!)
 * @param len		buffer length
 * @param handle	pointer to handle
 * @param phys_wsm_l2_table	pointer to physical L2 table(?)
 *
 * @return 0 if no error
 *
 */
int mobicore_map_vmem(struct mc_instance *instance, void *addr,
	uint32_t len, uint32_t *handle, void **phys_wsm_l2_table)
{
	return -ENODEV;
}
EXPORT_SYMBOL(mobicore_map_vmem);

/**
 * Unmap a virtual memory buffer from mobicore
 * @param instance
 * @param handle
 *
 * @return 0 if no error
 *
 */
int mobicore_unmap_vmem(struct mc_instance *instance, uint32_t handle)
{
	return -ENODEV;
}
EXPORT_SYMBOL(mobicore_unmap_vmem);

/**
 * Free a WSM buffer allocated with mobicore_allocate_wsm
 * @param instance
 * @param handle		handle of the buffer
 *
 * @return 0 if no error
 *
 */
int mobicore_free(struct mc_instance *instance, uint32_t handle)
{
	return -ENODEV;
}
EXPORT_SYMBOL(mobicore_free);


/**
 * Allocate WSM for given instance
 *
 * @param instance		instance
 * @param requested_size		size of the WSM
 * @param handle		pointer where the handle will be saved
 * @param virt_kernel_addr	pointer for the kernel virtual address
 * @param phys_addr		pointer for the physical address
 *
 * @return error code or 0 for success
 */
int mobicore_allocate_wsm(struct mc_instance *instance,
	unsigned long requested_size, uint32_t *handle, void **virt_kernel_addr,
	void **phys_addr)
{
	return -ENODEV;
}
EXPORT_SYMBOL(mobicore_allocate_wsm);

/**
 * Initialize a new mobicore API instance object
 *
 * @return Instance or NULL if no allocation was possible.
 */
struct mc_instance *mobicore_open(void)
{
	return NULL;
}
EXPORT_SYMBOL(mobicore_open);

/**
 * Release a mobicore instance object and all objects related to it
 * @param instance instance
 * @return 0 if Ok or -E ERROR
 */
int mobicore_release(struct mc_instance *instance)
{
	return -ENODEV;
}
EXPORT_SYMBOL(mobicore_release);

/** @} */
