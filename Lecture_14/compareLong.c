// Define how to compare type long
int compareLong(const void *target_ptr, const void *table_ptr)
{
    // target is the value searched for
    long target = *(long *)target_ptr; // type cast as (long pointer) then dereference
    // table_value is the value in array
    long table_value = *(long *)table_ptr;
    /* if equal return 0
    else
    -1 if target is smaller
    1 if target is larger */
    return (target == table_value) ? 0 : ((target < table_value) ? -1 : 1);
}