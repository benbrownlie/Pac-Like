#pragma once
#include "Behavior.h"
class EvadeBehavior : public Behavior
{
public:
	EvadeBehavior() {}

	virtual void update(Agent* owner, float deltaTime) override;
	virtual void draw(Agent* owner) override;
	void setTarget(Actor* target) { m_target = target; }
	Actor* getTarget() { return m_target; }

private:
	Actor* m_target = nullptr;
};

