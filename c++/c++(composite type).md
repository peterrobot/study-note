# Study Notes

for C primer plus

    first edited in 2019.6.6        IN ubuntu

1.Composite Type

## array

    General format
    *typeName* *arrayName*[*arraySize*]

* Attention
  * 有效的下角标 (available subscripe)

初始化 (Initialization)

```c++
    int hand[4];    //available
    int cards[4] = {1,2,3,4} ;    //available
    int score[3] = {0};   //available,set every element as zero
```

* Attention
  * Set the arrarysize corretly
  * Containing the data type

---------

## string

### Original string using array

#### Initialization

```c++
    char name[10] = {'p','e','t','e','r','\0'};   //available,a string
    char name[10] = {'T','o','m'}     //availbale,but not a string
    char bird[6] = "eagle";      //available,compilar will automatically add 'null character' or '\0' to the end
    char bird[] = "eagle"       //available too,let the compilar decide the arrarysize
```

* Attention
  * Don't forget the '\0' or just use "string"
  * There is a big difference between 'S' and  "S" , which means a string and in fact a memery adress, while the one before means a single number.('S'==83   "S"==83\0)

#### Connetion between string

    The compilar will automactially connet two string which has two blank between.
>*Blank*: space,tab character,line feed

```c++
    cout << "No games,no life";
    cout << "No game,"  "n life";
    cout << "No game"
    "No life";
    //they are all the same
```

#### Using string as a array

```c++
    #include <cstring>  //for function strlen
    strlen(arrayName);  //return the number of 'letters' in the string,and it doesn't count NUL.
    sizeof(arrayName);  //retrun the length of array,including the NUL.
```

#### How cin treat it

1. The "cin" use blank to identify the end of the string
2. The "cin" could not prevent and potential risk of excessive elementary

So here is the way to slove special situation.
**The class function**
`cin.getline()` & `cin.get()`
They have someting in comment that they both they both got the whole line as input and don't stop till they see the line feed.

* Attention
  * The `cin.getline()` will pass the line feed, however, on the contrary `cin.get()` will hold it in the string.
  * Both of them have two parameter: arrayname & arraysize. Here is an example `cin.get(arrayname,arraysize)`.
  * `cin.getline()` will pass the line feed, while `cin.get()` will leave it in the input string. In order to due to this, we need to use `.get()` twice. And here is a new feather called function overloading which will learn later.

## structure
