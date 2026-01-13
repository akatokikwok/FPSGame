#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSCharacterBase.generated.h"

/** 
 * 角色基类.
 * 负责伤害/承伤/攻击技能.
 * UCLASS(config = Game)
 * 告诉引擎，当前这个类（UClass）里的配置属性，默认应该从“Game”这个配置族（Config Family）中读取和保存
 * config: 这是一个类说明符（Class Specifier），表示这个类支持从 .ini 文件加载数据
 * = Game: 指定了配置文件的文件名类别
 * 对应工程目录：Config/DefaultGame.ini
 * 对应保存目录：Saved/Config/Windows/Game.ini
 * 光写类说明符没用，你必须在具体的变量上标记 Config，引擎才会去读写它; 
 */
UCLASS(config = Game)
class AFPSCharacterBase : public ACharacter
{
	GENERATED_BODY()
};
