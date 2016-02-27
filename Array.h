#ifndef _H_ARRAY
#define _H_ARRAY



struct Array
{
	float* Max;
	int Count;
};

// Chú ý: Vị trí các phần tử trong mảng tính từ 0

void initialize(struct Array **aptr, int size);		// Khởi tạo mảng a // size là số phần tử của mảng
void delete(struct Array *a);						// Xoá mảng a

float get(struct Array *a, int i);					// Trả về giá trị phần tử thứ i của mảng // Trả về giá trị -1 nếu i không hợp lệ
void set(struct Array *a, int i, float data);		// Gán giá trị cho phần tử thứ i của mảng
void swap(struct Array *a, int i1, int i2);			// Đổi tráo giá trị phần tử thứ i1 và i2

void print(struct Array *a);						// In ra mảng

void bublesort(struct Array *a);					// Sắp xếp nổi bọt
void selectionsort(struct Array *a);				// Sắp xếp có lựa chọn
void insertionsort(struct Array *a);				// Sắp xếp chèn

float max(struct Array *a, int **maxArray);			// Trả về giá trị lớn nhất // Mảng maxArray dùng để lưu vị trí các phần tử mang giá trị lớn nhất
float min(struct Array *a, int **minArray);			// Trả về giá trị nhỏ nhất // Mảng minArray dùng để lưu vị trí các phân tử nhỏ nhất
float average(struct Array *a);						// Tìm giá trị trung bình của các phần tử trong mảng

void sequentialsearch(struct Array *a);				// Tìm kiếm lần lượt
void binarysearch(struct Array *a);					// Tìm kiếm nhị phân

float difference(struct Array *a, int i1, int i2);	// Độ lệch giá trị giữa hai phần tử i1 và i2
float deviation(struct Array *a);					// Trả về giá trị độ lệch trung bình của mảng // https://en.wikipedia.org/wiki/Average_absolute_deviation -> Mean absolute deviation around a central point



#endif