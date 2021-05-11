#include "monty.h"

/**
 * exit_op - performs exit operations (free/close)
 *
 * Return: Nothing
 */
void exit_op(void)
{
  free(global.gbuff), fclose(global.file);
  free_stack_t(global.headstack);
}
