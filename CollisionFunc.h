#ifndef __CollisionFunc__
#define __CollisionFunc__
#include"cocos2d.h"

USING_NS_CC;

typedef struct tagVertex // ����
{
	Point start; // ������
	Point end;   // ����
} Vertex;

class CollisionFunc
{
public:
	static bool collisionCircleToRect(Point circle_pos, float radius, Rect rc);
	// ���� �簢�� �浹
	static bool collisionCircleToAngleRect(Point circle_pos, float radius, Rect rc, float angle);
	// ���� ������ ���ư��ִ� �簢�� �浹
	static bool collisionVertexToCircle(Vertex *line, int l_count, Point circle_pos, float radius);
	// ���� �ٰ��� �浹
	static bool collisionVertexToRect(Vertex *line, int l_count, Rect rc);
	// �ٰ����� �簢�� �浹
	static bool collisionVertexToVertex(Vertex *line1, int l_count1, Vertex *line2, int l_count2);
	// �ٰ����� �ٰ��� �浹
	static bool collisionLineToCircle(Vertex line, Point circle_pos, float radius);
	// ���� �� �浹
	static bool collisionLineToRect(Vertex line, Rect rc);
	// ���� �簢�� �浹
	static bool collisionLineToLine(Vertex line1, Vertex line2);
	// ���� �� �浹
	static bool collisionPointToCircle(Point pos, Point circle_pos, float radius);
	// ���� �� �浹
	static bool collisionCircleToCircle(Point circle_pos1, float radius1, Point circle_pos2, float radius2);
	// ���� �� �浹
};
#endif