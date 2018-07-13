void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
	int *harr; 
	int heap_size;
	void MinHeapify(int i);
	int parent(int i) { return (i-1)/2; }
	int left(int i) { return (2*i + 1); }
	int right(int i) { return (2*i + 2); }
	int extractMin();
	int getMin() { return harr[0]; }
void MinHeapify(int i)
{
	int l = left(i);
	int r = right(i);
	int smallest = i;
	if (l < heap_size && harr[l] < harr[i])
		smallest = l;
	if (r < heap_size && harr[r] < harr[smallest])
		smallest = r;
	if (smallest != i)
	{
		swap(&harr[i], &harr[smallest]);
		MinHeapify(smallest);
	}
}
int extractMin()
{
	if (heap_size == 0)
		return INT_MAX;
	int root = harr[0];
	if (heap_size > 1)
	{
		harr[0] = harr[heap_size-1];
		MinHeapify(0);
	}
	heap_size--;

	return root;
}

int kthsmallest(const int* A, int n1, int B) {
    int i;
    heap_size = n1;
	harr = A;
	i = (heap_size - 1)/2;
	while (i >= 0)
	{
		MinHeapify(i);
		i--;
	}

	for ( i=0; i<B-1; i++)
		extractMin();
	return getMin();
}
