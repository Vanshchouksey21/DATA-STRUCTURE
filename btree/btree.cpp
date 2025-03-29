
 // ----------------------self refrence stucture or self refrnce class  -----------------------------
    
    // A self-referential structure or self-referential class is a structure or class that contains a pointer or reference to another instance of the same type. This is commonly used in tree and linked list data structures



    #include<iostream>
using namespace std ;
// class node {
//     public :
//     int data ; 
//     node *l , *r ;

//    public :node( int d){
//     data = d ;
//     l = NULL , r = NULL;
//    }
// };
// int main (){

//     node *root = new node (20) ; 
//     root->l = new node (56) ; 
//     root->r = new node (10) ; 

 
//    cout<<root->data<<" \n";
//    cout<<root->l->data<<" \n";
//    cout<<root->r->data;




// }


class node{
    public :
    int data ; 
    node *l , *r ;
     public : node ( int d ){
        data = d ; 
        l = NULL ;
        r = NULL ;
        
     }
    
    
    };
    int main (){
    
        node *root = new node (20 );
        root->l = new node (10);
        root->r = new node (30);
    
        cout<<root->data;
        cout<<root->l->data;
        cout<<root->r->data;
    
    }
