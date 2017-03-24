/*
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;

}node;

*/


void decode_huff(node * root,string s)
{
    int length = s.size() , i = 0;
    node *temp = root;
    while(length >= 0)
    {
        char check = s.at(i);
        if(check == '1')
        {
            temp = temp -> right;
            if(temp -> data == '\0')
            {

            }
            else
            {
                cout << temp -> data;
                temp = root;
            }
        }
        else
        {
            temp = temp -> left;
            if(temp -> data == '\0')
            {

            }
            else
            {
                cout << temp -> data;
                temp = root;
            }
        }
        length--;
        i++;
    }
}
