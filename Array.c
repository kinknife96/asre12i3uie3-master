#include "Array.h"
#include <stdlib.h>
#include <stdio.h>



void initialize(struct Array **aptr, int size)
{
	(*aptr) = (struct Array*) malloc( sizeof(struct Array) );
	
	(*aptr)->Max = (float*) malloc( sizeof(float) * size);
	
	(*aptr)->Count = size;
	
};

void delete(struct Array *a)
{
	free(a->Max);
	free(a);
};



float get(struct Array *a, int i)
{
	if (i > -1 && i < a->Count)
		return a->Max[i];
	else
		return -1;
};

void set(struct Array *a, int i, float data)
{
	if (i > -1 && i < a->Count)
		a->Max[i] = data;
};

void swap(struct Array *a, int i1, int i2)
{
	if (i1 > -1 && i1 < a->Count && i2 > -1 && i2 < a->Count)
	{
		float n = a->Max[i1];
		a->Max[i1] = a->Max[i2];
		a->Max[i2] = n;
	}
};


void print(struct Array *a)
{
	printf("\n");
	int i;
	for (i = 0; i < a->Count; ++i)
	{
		printf("%d: %-5.0f ", i + 1, get(a, i));
	
		if (i % 5 == 4)
			printf("\n");
		else
			printf("| ");
	}
	printf("\n");
}


// Sắp xếp nổi bọt
void bublesort(struct Array *a)
{
	
};

// Sắp xếp có lựa chọn
void selectionsort(struct Array *a)
{
	
};

// Sắp xếp chèn
void insert(struct Array *a, int k, float value) 
{
    int i= k-1;
    while (i >= 0 && get(a,i) > value) 
	{
		set(a,i+1,get(a,i));
        i= i - 1;
    }
    set(a,i+1,value);
}
void insertionsort(struct Array *a)
{
	int k= 1,length=1;
    while(get(a,length)!=-1) length++;
    while (k < length) 
	{
        insert(a, k, get(a,k));
        k= k + 1;
    }
    printf("\n Day da sap xep la :");
    printf("\n");
    print(a);
};



// Trả về giá trị lớn nhất // Mảng maxArray dùng để lưu vị trí các phần tử mang giá trị lớn nhất
float max(struct Array *a, int **maxArray)
{
	
};

// Trả về giá trị nhỏ nhất // Mảng minArray dùng để lưu vị trí các phân tử nhỏ nhất
float min(struct Array *a, int **minArray)
{
	
};

// Tìm giá trị trung bình của các phần tử trong mảng
float average(struct Array *a)
{
	int i;
    float S=0;
    for(i=0;i<a->Count;i++)
    {
        S+=get(a,i);
    }
    return S/a->Count;
};



// Tìm kiếm lần lượt
void sequentialsearch(struct Array *a)
{
	
};

// Tìm kiếm nhị phân
void binarysearch(struct Array *a);
{
    int first,last,middle;
    float search;
    printf("\n so can tim la : ");
    scanf("%f",&search);
	first = 0;
    last =a-> Count - 1;
    middle = (first+last)/2;
 
   while (first <= last) {
      if (get(a,middle) < search)
         first = middle + 1;    
      else if (get(a,middle) == search) {
         printf("%f o vi tri so %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Khong tim thay! %f khong co trong danh sach.\n", search);
};


// Độ lệch giá trị giữa hai phần tử i1 và i2
float difference(struct Array *a, int i1, int i2)
{
	
};

// Trả về giá trị độ lệch trung bình của mảng // https://en.wikipedia.org/wiki/Average_absolute_deviation -> Mean absolute deviation around a central point
float deviation(struct Array *a)
{
	int i;
    float Q=0;
    for(i=0;i<a->Count;i++)
    {
        Q+=fabs(get(a,i)-Average(a));
    }
    
    printf("\n Do lech trung binh la : %f",Q/a->Count);
};