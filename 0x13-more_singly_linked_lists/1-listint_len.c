#include <stdio.h>
#include "lists.h"
	/**
	* Assuming you have a header file that defines the listint_t structure
	*/

size_t listint_len(const listint_t *h) {
	size_t node_count = 0;
	/**
	*Initialize a count to keep track of the number of nodes
	*/

		while (h != NULL) {
		node_count++;
		/**
		*Increment the node count
		*/
		h = h->next;
		/**
		*Move to the next node
		*/
		}

	return node_count;
	/**
	 *  Return the total number of nodes
	 */
}

