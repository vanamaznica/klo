#pragma once
template <class T>
class Array
{
    T* a;
    int size;

public:
    Array()
    {
        a = nullptr;
        size = 0;
    }

    ~Array()
    {
        delete[] a;
    }

    int GetSize()
    {
        return size;
    }

    void SetSize(int n)
    {
        T* b = new T[n];

        for (int i = 0; i < size && i < n; i++)
            b[i] = a[i];

        delete[] a;
        a = b;
        size = n;
    }

    int GetUpperBound()
    {
        return size - 1;
    }

    bool IsEmpty()
    {
        return size == 0;
    }

    void RemoveAll()
    {
        delete[] a;
        a = nullptr;
        size = 0;
    }

    T GetAt(int i)
    {
        return a[i];
    }

    void SetAt(int i, T value)
    {
        a[i] = value;
    }

    T& operator[](int i)
    {
        return a[i];
    }

    void Add(T value)
    {
        SetSize(size + 1);
        a[size - 1] = value;
    }

    void InsertAt(int i, T value)
    {
        SetSize(size + 1);

        for (int j = size - 1; j > i; j--)
            a[j] = a[j - 1];

        a[i] = value;
    }

    void RemoveAt(int i)
    {
        for (int j = i; j < size - 1; j++)
            a[j] = a[j + 1];

        SetSize(size - 1);
    }
};