//READ/WRITE FILES [I/O = Hard/Drive not CONSOLE] 
//Open file get access to read, write or both 
//Modify File   Read from file and/or Write to file 
//Close file    Close file so other processes can access it 


//OPEN FILE 
/* 
1   r   READ ONLY 
2   w   WRITE ONLY 
NOTE: If it does not exist, then a new file is created. Start writing content from the beginning of the file. 
3   a   Opens a text file for writing in appending mode. 
NOTE:If it does not exist, then a new file is created. Start appending content in the existing file content. 
4   r+  Opens a text file for both reading and writing. 
5   w+  Opens a text file for both reading and writing.  
It first truncates the file to zero length if it exists,  
creates a file if it does not exist. 
6   a+  Opens a text file for both reading and writing.  
It creates the file if it does not exist.  
Start from beginning but writing can only be appended. 
*/ 

//CREATE AND WRITE TO FILE 
// #include <stdio.h> 
// int main() { 
//    //FILE *fp;        //pointer to a file type 
//    //fp = fopen("textFile.txt", "w+"); 
//    fprintf(fp, "This is testing for fprintf...\n"); 
//    fputs("This is testing for fputs...\n", fp); 
//    fclose(fp); 
//    return 0; 
// } 

//  /*6*/ 
// #include <stdio.h> 
// void main() { 
//    FILE *fp; 
//    char buff[255]; 
//    fp = fopen("textFile.txt", "r"); 
//    fscanf(fp, "%s", buff); 
//    printf("1 : %s\n", buff ); 
//    fgets(buff, 255, (FILE*)fp); 
//    printf("2: %s\n", buff ); 
//    fgets(buff, 255, (FILE*)fp); 
//    printf("3: %s\n", buff ); 
//    fclose(fp); 
// } 
//HOW TO READ BINARY FILE 
//fread() and fwrite() 