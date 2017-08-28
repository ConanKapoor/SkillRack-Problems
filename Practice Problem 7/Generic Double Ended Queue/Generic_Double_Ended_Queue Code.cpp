template<class T>
queue<T>::queue()
{
    front=0;
    rear=-1;
    capacity=20;
    ele=new T[20];
}

template<class T>
bool queue<T>::isempty()
{
    return rear<front;
}

template<class T>
bool queue<T>::isfull()
{
    return capacity<rear-front+1;
}

template<class T>
bool queue<T>::enqueue(T data)
{
    *(ele+rear-front+1)=data;
    return *(ele+ rear++ +1)==data;
}

template<class T>
T queue<T>::dequeue()
{
    if(rear<front)
        ERR_Flag=true;
    else
        return *(ele+front++);
}

template<class T>
queue<T>::~queue()
{}

template<class T>
void queue<T>::print()
{
    if(rear<front)
        cout<<"Queue is empty\n";
    else
        for(int i=front;i<=rear;i++)
            cout<<*(ele+i)<<endl;
}

template<class T>
bool deque<T>::push_Back(T data)
{
    return this->enqueue(data);
}

template<class T>
bool deque<T>::push_Front(T data)
{
    T*A =new T[20];
    *A=data;
    for(int i=this->front;i<=this->rear;i++)
        *(A+i+1)=*(this->ele+i);
    this->ele=A;
    this->front=0;
    this->rear++;
    return this->rear<=20;
}

template<class T>
T deque<T>::pop_Front()
{
    return this->dequeue();
}

template<class T>
T deque<T>::pop_Back()
{
    if(this->rear<this->front)
        ERR_Flag=true;
    else
        return *(this->ele+this->rear--);
}
