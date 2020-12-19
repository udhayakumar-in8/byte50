// implement a hash table in cmake
#include <stdio.h>
#include <stdlib.h>

struct set
{
  int key;
  int data;
};
struct set *array;
int capacity = 10; /* small size am giving*/
int size = 0;

// inserting data into hash table
void insert(int key, int data)
{
  int index = hashFunction(key);
  if (array[index].data == 0)
  {
    array[index].key = key;
    array[index].data = data;
    size++;
    printf("\n Key (%d) has been inserted \n", key);
  }
  else if (array[index].key == key)
  {
    array[index].data = data;
  }
  else
  {
    printf("\n Collision occured  \n");
  }
}

int getPrime(int );
void init_array(void);
int main(void)
{
  int choice, key, data, n;
  int c = 0;
  init_array(); //intializing array for hashing

  do
  {
    printf("1.Insert item in th e Hash Table"
         "\n 2.Remove item from the Hash Table"
         "\n 3.Check the size of Hash Table"
         "\n 4.Display a Hash Table"
         "\n \n Please enter your choice: ");

    scanf("%d", &choice);
    switch (choice)
    {
        case 1:

            printf("Enter key -:\t");
            scanf("%d", &key);
            printf("Enter data -:\t");
            scanf("%d", &data);
            insert(key, data);
            break;
        default:
            printf("Invalid Input\n");

     printf("\nDo you want to continue (press 1 for yes): ");
     scanf("%d", &c);
    }while (c == 1); 
}
int checkPrime(int n)
{
  int i;
  if (n == 1 || n == 0) {
    return 0;
  }
  for (i = 2; i < n / 2; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int getPrime(int n)
{
  if (n % 2 == 0)
  {
    n++;
  }
  while (!checkPrime(n))
  {
    n += 2;
  }
  return n;
}
  void init_array(void)
 {
    capacity = getPrime(capacity);
    array = (struct set *)malloc(capacity * sizeof(struct set));
    for (int i = 0; i < capacity; i++)
    {
        array[i].key = 0;
        array[i].data = 0;
    }
}


