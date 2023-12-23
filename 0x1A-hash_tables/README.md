0x1A-hash_tables readme

Resources
https://intranet.alxswe.com/rltoken/IQVfdxJlS6jhAgcuUoCseg
https://intranet.alxswe.com/rltoken/ZKpRI_FxOxAz80Onpfy0Ew
https://intranet.alxswe.com/rltoken/mxjKpEfAw3E5B8S3inPuHQ
https://intranet.alxswe.com/rltoken/3RwwAqmpGJpMiBa7BE9fAQ
https://intranet.alxswe.com/rltoken/OgO7uga3PIaCTMtTzYCY3g

Task 1
A function that creates a hash table.

Prototype: hash_table_t *hash_table_create(unsigned long int size);
where size is the size of the array
Returns a pointer to the newly created hash table
If something went wrong, the function returns NULL

Task 2
A hash function implementing the djb2 algorithm.

Prototype: unsigned long int hash_djb2(const unsigned char *str);
You are allowed to copy and paste the function from https://intranet.alxswe.com/rltoken/3B7lCUBD4yZh66Pbl2KcEQ

Task 3
A function that gives you the index of a key.

Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
where key is the key
and size is the size of the array of the hash table
This function should use the hash_djb2 function that you wrote earlier
Returns the index at which the key/value pair should be stored in the array of the hash table
You will have to use this hash function for all the next tasks
