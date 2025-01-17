/*
 * This file is part of ILVES-PC implementation.
 *
 * ILVES-PC is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * ILVES-PC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with GROMACS; if not, see
 * http://www.gnu.org/licenses, or write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA.
 */

#pragma once

/*  LIST, version 1.0.0

    Author:
    Carl Christian Kjelgaard Mikkelsen,
    Department of Computing Science and HPC2N
    Umeaa University
    Sweden
    Email: spock@cs.umu.se

    Date: August 14th, 2014

    This is a library of subroutines for manipulating simply linked lists in
    the context of molecules. It would be natural to rewrite this library to
    handle arbitrary lists. The user would need to supply a function which can
    compare two elements and decide on the order, but that is all.

    An efficient subroutine for merging two sorted lists would be a nice
    addition to the library.

    It is convinient to think of a singly linked list as a passenger train.
    The conductor starts at one end of the train, i.e. the root, and advances
    through the train one car at a time.

*/

// ---------------------------------------------------------------------------
// Datastructures
// ---------------------------------------------------------------------------

// Data structure needed for simply linked lists.
typedef struct my_node {
    int number;               // The number of interest
    struct my_node *next;     // A pointer to the next element in the list.
} my_node_t;

// ---------------------------------------------------------------------------
// Function prototypes
// ---------------------------------------------------------------------------

// Inserts an integer into a sorted linked list
int sinsert(int n, my_node_t **root);

// Scans a sorted linked list for an integer, deleting the corresponding node
int sdelete(int n, my_node_t **root);

// Inserts an integer into a linked list
void insert(int n, my_node_t **root);

// Traverse a linked list printing the content of the nodes
void print_list(my_node_t *root);

// Computes the length of a simply linked list
int count(my_node_t *root);

// Compressed the numbers stored in a simply linked list into an array
void copy_list(my_node_t *root, int *a);

// Releases all the memory used by a linked list.
void free_list(my_node_t *root);
