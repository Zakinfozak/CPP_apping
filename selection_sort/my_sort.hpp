
template <class T>
void swap(T& x,T& y)
{
     T temp;
     temp=x;
     x=y;
     y=temp;
}
template<class T>
void my_selection_sort( T begin, T end)
{
    T min = begin;
    for (T index = begin; index!= end; index++)
    {
        for (T bis = index ; bis != end; bis++)
        {
            if (*bis < *min)
            {
                min = bis;
            }
        }
        swap(*min, *index);
    }
}
