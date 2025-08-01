#include "redblack.h"
#include <stdlib.h>
#include "fatal.h"
#include "print.h"

/* START: fig12_14.txt */
        typedef enum ColorType { Red, Black } ColorType;

        struct RedBlackNode
        {
            ElementType  Element;
            RedBlackTree Left;
            RedBlackTree Right;
            ColorType    Color;
        };

//        static Position NullNode = NULL;  /* Needs initialization */

        /* Initialization procedure */
        RedBlackTree
        Initialize( Position *NullNode )
        {
            RedBlackTree T;

            if( *NullNode == NULL )
            {
                *NullNode = malloc( sizeof( struct RedBlackNode ) );
                if( *NullNode == NULL )
                    FatalError( "Out of space!!!" );
                (*NullNode)->Left = (*NullNode)->Right = *NullNode;
                (*NullNode)->Color = Black;
                (*NullNode)->Element = 12345;
            }

            /* Create the header node */
            T = malloc( sizeof( struct RedBlackNode ) );
            if( T == NULL )
                FatalError( "Out of space!!!" );
            T->Element = NegInfinity;
            T->Left = T->Right = *NullNode;
            T->Color = Black;

            return T;
        }
/* END */

        void
        Output( ElementType Element )
        {
            print32(  Element );
            prints( "\n" );
            //printf( "%d\n", Element );
        }

/* START: fig12_13.txt */
        /* Print the tree, watch out for NullNode, */
        /* and skip header */

        static void
        DoPrint( RedBlackTree T, Position NullNode)
        {
            if( T != NullNode )
            {
                DoPrint( T->Left, NullNode );
                Output( T->Element );
                DoPrint( T->Right, NullNode );
            }
        }

        void
        PrintTree( RedBlackTree T, Position NullNode )
        {
            DoPrint( T->Right, NullNode );
        }
/* END */

        static RedBlackTree
        MakeEmptyRec( RedBlackTree T, Position NullNode )
        {
            if( T != NullNode )
            {
                MakeEmptyRec( T->Left, NullNode );
                MakeEmptyRec( T->Right, NullNode );
                //free( T );
            }
            return NullNode;
        }

        RedBlackTree
        MakeEmpty( RedBlackTree T, Position NullNode )
        {
            T->Right = MakeEmptyRec( T->Right, NullNode );
            return T;
        }

        Position
        Find( ElementType X, RedBlackTree T, Position NullNode )
        {
            if( T == NullNode )
                return NullNode;
            if( X < T->Element )
                return Find( X, T->Left, NullNode );
            else
            if( X > T->Element )
                return Find( X, T->Right, NullNode );
            else
                return T;
        }

        Position
        FindMin( RedBlackTree T, Position NullNode )
        {
            T = T->Right;
            while( T->Left != NullNode )
                T = T->Left;

            return T;
        }

        Position
        FindMax( RedBlackTree T, Position NullNode )
        {
            while( T->Right != NullNode )
                T = T->Right;

            return T;
        }

        /* This function can be called only if K2 has a left child */
        /* Perform a rotate between a node (K2) and its left child */
        /* Update heights, then return new root */

        static Position
        SingleRotateWithLeft( Position K2 )
        {
            Position K1;

            K1 = K2->Left;
            K2->Left = K1->Right;
            K1->Right = K2;

            return K1;  /* New root */
        }

        /* This function can be called only if K1 has a right child */
        /* Perform a rotate between a node (K1) and its right child */
        /* Update heights, then return new root */

        static Position
        SingleRotateWithRight( Position K1 )
        {
            Position K2;

            K2 = K1->Right;
            K1->Right = K2->Left;
            K2->Left = K1;

            return K2;  /* New root */
        }

/* START: fig12_15.txt */
        /* Perform a rotation at node X */
        /* (whose parent is passed as a parameter) */
        /* The child is deduced by examining Item */

        static Position
        Rotate( ElementType Item, Position Parent )
        {

            if( Item < Parent->Element )
                return Parent->Left = Item < Parent->Left->Element ?
                    SingleRotateWithLeft( Parent->Left ) :
                    SingleRotateWithRight( Parent->Left );
            else
                return Parent->Right = Item < Parent->Right->Element ?
                    SingleRotateWithLeft( Parent->Right ) :
                    SingleRotateWithRight( Parent->Right );
        }
/* END */

/* START: fig12_16.txt */

        static
        void HandleReorient( ElementType Item, RedBlackTree T, Position X, Position P, Position GP, Position GGP )
        {
            X->Color = Red;        /* Do the color flip */
            X->Left->Color = Black;
            X->Right->Color = Black;

            if( P->Color == Red )  /* Have to rotate */
            {
                GP->Color = Red;
                if( (Item < GP->Element) != (Item < P->Element) )
                    P = Rotate( Item, GP );  /* Start double rotate */
                X = Rotate( Item, GGP );
                X->Color = Black;
            }
            T->Right->Color = Black;  /* Make root black */
        }

        RedBlackTree
        Insert( ElementType Item, RedBlackTree T, Position NullNode )
        {
            Position X, P, GP, GGP;
            X = P = GP = T;
            NullNode->Element = Item;
            while( X->Element != Item )  /* Descend down the tree */
            {
                GGP = GP; GP = P; P = X;
                if( Item < X->Element )
                    X = X->Left;
                else
                    X = X->Right;
                if( X->Left->Color == Red && X->Right->Color == Red )
                    HandleReorient( Item, T, X, P, GP, GGP );
            }

            if( X != NullNode )
                return NullNode;  /* Duplicate */

            X = malloc( sizeof( struct RedBlackNode ) );
            if( X == NULL )
                FatalError( "Out of space!!!" );
            X->Element = Item;
            X->Left = X->Right = NullNode;

            if( Item < P->Element )  /* Attach to its parent */
                P->Left = X;
            else
                P->Right = X;
            HandleReorient( Item, T, X, P, GP, GGP ); /* Color it red; maybe rotate */

            return T;
        }
/* END */

        RedBlackTree
        Remove( ElementType Item, RedBlackTree T )
        {
            prints( "Remove is unimplemented\n" );
            if( Item )
                return T;
            return T;
        }

        ElementType
        Retrieve( Position P )
        {
            return P->Element;
        }
