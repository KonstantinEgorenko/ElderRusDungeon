// Konstantin Egorenko All Rights Reserved



#include "AnimInstances/Hero/WarriorHeroLinkedAnimInstance.h"
#include "AnimInstances/Hero/WarriorHeroAnimInstance.h"

UWarriorHeroAnimInstance* UWarriorHeroLinkedAnimInstance::GetHeroAnimInstance() const
{
    return Cast<UWarriorHeroAnimInstance>(GetOwningComponent()->GetAnimInstance());
}
