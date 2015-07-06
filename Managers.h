// Managers.h: interface for the Managers class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MANAGERS_H__4BDB2F9E_3FF3_4117_9D88_D88F7F971525__INCLUDED_)
#define AFX_MANAGERS_H__4BDB2F9E_3FF3_4117_9D88_D88F7F971525__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Chess.h"
#include "NetControl.h"
class Managers  
{
public:
	void GameStart();
	bool DoMsg(int x,int y,int action);
	//the king, the military counselor, the horse, the elephant, the chariot and the pawn
	//
	int Game_State;
	bool PAUSE;
	Chess LastCh;
	Chess *LossCh;
	Chess *PointCh;
	Chess nChessinfo[32];//��¼32�����ӵ���Ϣ
	int map[9][10];//��¼�����ϵ���Ϣ��
	int PlayerAc;
	Managers();
	virtual ~Managers();
	bool Game_Type;
	friend class NetControl;
protected:
	void Updata();
	bool Moveto(int x,int y,bool isgo);
	Chess * Search(int x,int y);
};

#endif // !defined(AFX_MANAGERS_H__4BDB2F9E_3FF3_4117_9D88_D88F7F971525__INCLUDED_)
