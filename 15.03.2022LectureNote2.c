//Example: Given the following declarations find which items are correct.
//int [a],[b5]; 
//b=a[0]; ---> Not valid since a[0] is not defined.
//a[3]=2; ---> Not valid since a[3] does not exist starts from the index 1 to 2
//a[0]='0'; ---> a[0] = int '0' which means valid.
//k=0;
//a[k--]=k+1; ---> a[(k--)=0] therefore valid


//Example Given the following declarations find what is stored in the array:
//int a[]={10,15,15,0}, j=1;
//a[0]=a[j]+3;      
//a[3]=a[0]+2;      
//a[j]=a[j+1]+1;    
//a[0]=a[++j];     
//a[2]=a[j-2];     

//10 15 15 0
//18 16 15 20
//16 16 15 20
//16 16 15 20