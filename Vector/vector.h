template<typename T>
class Vector{
    private:
        T *arr; //int *arr; //dynamic allocation
        int cs; //current size of the vector
        int ms; //maximum size/capacity of the vector

    public:
        //constructor
        Vector(int max_size=1){
            cs = 0;
            ms = max_size ;
            arr = new T[ms]; //arr = new int[ms];
        }
        //operations
        void push_back(const T d){
            //two cases 
            if(cs==ms) 
            {
                //create a new array , delete the old one and double the capacity
                T *oldArr= arr;  //int *oldArr= arr;
                ms = 2*ms;
                arr = new T[ms]; //arr = new int[ms];
                //copy elements
                for(int i=0;i<cs;i++)
                {
                    arr[i] = oldArr[i];
                }
                //delete old array
                delete [] oldArr;
            }
            arr[cs] = d;
            cs++;
        }
        void pop_back(){
            if(cs>=0){
               cs--;
            }
        }
        bool isEmpty() const
        {
            return cs==0;
        }
        //front element
        T front() const{
            return arr[0];
        }
        //last element 
        T back() const{
           return arr[cs-1];
        }
        // At(i) return element at ith position
        T  at(int i) const{
            return arr[i];
        }
        int size() const{
            return cs;
        }
        int capacity() const{
            return ms;
        }
        T operator[](const int i) const{ //operator overloadingq
        }
};
