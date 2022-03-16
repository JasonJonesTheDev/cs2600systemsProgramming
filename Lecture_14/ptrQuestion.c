
void main()
{
    // declares ptr a pointer to const int type.
    const int *ptrA;
    // You can modify ptr itself but not the dereferenced value.
    // Example
    const int ten = 10;
    // declares a const ptr that cannot change the value of the var it points to
    const int *ptrB = &ten;
    //*ptrB = 5;
    // wrong  -- Can NOT modify the value that ptr is pointing to
    // however you can change what the pointer points to 
    ptrB++;
    // declares ptr a const pointer to int type.
    int *const ptrC;
    // You are NOT allowed to modify ptr but you can modify the dereferenced value.
    // Example
    int hundred = 100;
    // this declares a constant pointer that cannot change what it is pointing to
    // However it can change the value of the var it points to
    int *const ptrD = &hundred;
    *ptrD = 5;
    // right
    //ptrD++;
    // wrong -- can NOT change pointer value
    // const int *refPtr;
    // if const is in front of the data type the pointer is just for reference purpose and cannot change what it points to
    // const ref pointer non manipulative can point to other memory locations 
    // int *const locationPtr;
    // if const is closer to the name of the pointer it can change the values of only that memory address and cannot be moved
    // const location pointer to one memory location can manipulate cannot move
}