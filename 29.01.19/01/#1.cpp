#include <iostream>

using namespace std;

class double_vector
{
	double *data;
	unsigned int size_;
	unsigned int capacity;

  public:
	double_vector()
	{
		size_ = capacity = 1;
		data = new double[1];
		*data = 0;
	};
	double_vector(int N)
	{
		size_ = capacity = N;
		data = new double[N];
		for (int i = 0; i < N; i++) {data[i] = 0;};
	};
	double_vector(double *A, int N)
	{
		size_ = capacity = N;
		for (int i = 0; i < N; i++) {data[i] = a[i];};
	};
	double_vector(const double_vector &A)
	{
		size_ = A.size_;
		capacity = A.capacity;
		data = A.data;
	};
	~double_vector()
	{
		delete[] data;
	};
	const double_vector &operator=(const double_vector &A)
	{
		size_ = A.size_;
		capacity = A.capacity;
		data = A.data;
		return *this;
	};
	double &operator[](int i)
	{
		return data[i];
	};
	void push_back(int x)
	{
		if (size_ >= capacity)
		{
			capacity *= 2;
			double* copy_ = new double[capacity];
			for (int i = 0; i < size_; i++) {copy_[i] = data[i];};
			delete[] data;
			data = copy_;
		};
		data[size_] = x;
		size_++;
	};
	void pop_back()
	{
		double copy_ = data[size_ - 1];
		delete[size_ - 1] data;
		size_--;
		return copy_;
	};
	unsigned int Length()
	{
		return size_;
	};
	unsigned int Vector_Capacity()
	{
		return capacity;
	};
	void resize_(int N)
	{
		capacity += N;
		double* copy_ = new double[capacity];
		for (int i = 0; i < size_; i++) {T[i] = data[i];};
		delete[] data;
		data = copy_;
	};
}

int
main()
{
}
