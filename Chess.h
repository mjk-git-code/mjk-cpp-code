// Chess.h: interface for the Chess class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CHESS_H__5F984F9F_C7C5_405D_893D_949250CDC5BC__INCLUDED_)
#define AFX_CHESS_H__5F984F9F_C7C5_405D_893D_949250CDC5BC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Chess  
{
public:
	int type;//1�� 2�� 3�� 4�� 5�� 6ʿ 7˧ ����7��ʾ������Ч
	bool color;//false���棨0����ң� true���棨1�ţ�
	int x,y;
	Chess();
	virtual ~Chess();

};

#endif // !defined(AFX_CHESS_H__5F984F9F_C7C5_405D_893D_949250CDC5BC__INCLUDED_)
