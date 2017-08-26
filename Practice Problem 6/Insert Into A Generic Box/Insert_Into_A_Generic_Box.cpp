template<class T>
g_Box<T>::g_Box()
{
    first=-1;mid=-1;last=-1;
    no_Of_Ele=0;
    capacity=20;
    ele = new T[capacity];
}

template<class T>
bool g_Box<T>::isEmpty()
{
    if(first==-1 && mid==-1 && last==-1)
        return true;
    else
        return false;
}

template<class T>
bool g_Box<T>::isFull()
{
    if(mid==20 && last==20)
        return true;
    else
        return false;
}

template<class T>
void g_Box<T>::insert_First(T data)
{
    if(isEmpty())
    {
        first++;
        last++;
        mid=(first+last)/2;
        ele[first]=data;
    }
    else
    {
        last++;
        mid=(first+last)/2;
        for(int i=(last-1),k=last;i>=0;i--,k--)
        {
            ele[i+1]=ele[i];
        }
        ele[first]=data;
    }
}

template<class T>
void g_Box<T>::insert_Mid(T data)
{
    if(!isFull())
    {
        mid=(first+last)/2;
        for(int i=last,k=last+1;i>=mid;i--,k--)
        {
            ele[k]=ele[i];
        }
        ele[mid]=data;
        last++;
        mid=(first+last)/2;
    }
}

template<class T>
void g_Box<T>::insert_Last(T data)
{
    if(!isFull())
    {
        last++;
        ele[last]=data;
        mid=(first+last)/2;
    }
}

template<class T>
void g_Box<T>::delete_First()
{
    if(isEmpty())
    {
        return;
    }
    for(int i=1,k=0;i<=last;i++,k++)
    {
        ele[k]=ele[i];
    }
	first--;
	last--;
}

template<class T>
void g_Box<T>::delete_Mid()
{
    if(isEmpty())
    {
        return;
    }
    for(int i=mid,k=(mid+1);i<last;i++,k++)
    {
        ele[k]=ele[i];
    }
    last--;
    mid=(first+last)/2;
}

template<class T>
void g_Box<T>::delete_Last()
{
    if(isEmpty())
    {
        return;
    }
    last--;
    mid=(first+last)/2;
}

template<class T>
void g_Box<T>::print()
{
    if(!isEmpty())
    {
        for(int i=0;i<=last;i++)
        {
            cout<<ele[i]<<endl;
        }
    }
    else
    {
        cout<<"Box empty"<<endl;
    }
}
