//
// Created by 张一鸣 on 2019/5/20.
//
#include <iostream>
using namespace std;
#ifndef ALGORITHM_BINARYSEARCH_H
#define ALGORITHM_BINARYSEARCH_H

#endif //ALGORITHM_BINARYSEARCH_H

template <typename Key, typename  Value>
class BST{
private:                                                                       
    struct Node{
        Key key;
        Value value;
        Node *left;
        Node *right;

        Node(Key key, Value value){
            this->key = key;
            this->value = value;
            this->left = this->right = NULL;
        }
    };

    Node *root; //根节点
    int count;  // 节点个数


public:

    BST(){
        root = NULL;
        count = 0;
    }

    int size(){
        return count;
    }

    bool isEmpty(){
        return count==0;
    }

    void insert(Key key ,Value value){
        root = insert();
    }

private:
    Node* insert(Node *node,Key key,Value value){
        if( node == NULL){
            count ++;
            return new Node(key, value);
        }
        if( key == node->key )
            node->value = value;
        else if( key < node->key)
            node->left = insert( node->left , key, value);
        else
            node->right = insert( node->right, key,value);

        return node;
    }

    bool contain(Node *node, Key key){

        if( node == NULL)
            return false;

        if(key == node->key)
            return true;
        else if( key < node->key)
            return contain( node->left, key);
        else
            return contain( node->right, key);
    }

    Value* search(Node *node,Key key){
        if( node == NULL )
            return NULL;

        if( key == node->key)
            return &(node->value);
        else if(key < node->key)
            return search(node->left,key);
        else
            return search(node->right,key);
    }
    void preOrder(){  //前序遍历
        preOrder(root);
    }
    void inOrder(){   //中序遍历
        inOrder(root);
    }
    void postOrder(){  //后序遍历
        postOrder(root);
    }
private:
    void preOrder(Node *node){
        if(node != NULL){
            cout<<node->key<<endl;
            preOrder(node->left);
            preOrder(node->right);
        }
    }

    void inOrder(Node *node){
        if(node != NULL){
            inOrder(node->left);
            cout<<node->key<<endl;
            inOrder(node->right);
        }
    }

    void postOrder(Node *node){
        if(node != NULL){
            inOrder(node->left);
            inOrder(node->right);
            cout<<node->key<<endl;
        }
    }
};