template<class T>
AC_BinaryTree<T>::AC_BinaryTree()
{
	no_Of_Ele=0;
	ele=new T[20];
	capacity=20;
}

template<class T>
bool AC_BinaryTree<T>::isEmpty()
{
	if(no_Of_Ele==0)
		return 1;
	else
		return 0;
}

template<class T>
bool AC_BinaryTree<T>::isFull()
{
	if(no_Of_Ele==20)
		return 1;
	else
		return 0;
}

template<class T>
void AC_BinaryTree<T>::insert(T data)
{
	if(isFull())
		cout<<"\nTree full insertion cannot be done";
	else
	{
		*ele=data;
		ele++;
		no_Of_Ele++;
	}

}

template<class T>
T AC_BinaryTree<T>::rightChild(int pos)
{

	T*n;
	if((2*pos+2)<no_Of_Ele)
	{
        n=ele-no_Of_Ele;
        n=n+2*pos+2;
        return *n;
	}
	else
	{
		cout<<"No right child"<<endl;
        ERR_Flag=true;
	}

}

template<class T>
T AC_BinaryTree<T>::leftChild(int pos)
{

	T*n;
	if((2*pos+1)<no_Of_Ele)
	{
        n=ele-no_Of_Ele;
        n=n+2*pos+1;
        return *n;
	}
	else
	{
		cout<<"No left child"<<endl;
        ERR_Flag=true;
	}
}

template<class T>
T AC_BinaryTree<T>::parent(int pos)
{
    T*n;
    no_Of_Ele;
    n=ele-no_Of_Ele;
    n=n+pos/2;
    return *n;
}
