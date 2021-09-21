// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SU_FIRSTCPP_API UMyObject : public UObject
{
	GENERATED_BODY()
public:

	UMyObject();

	UPROPERTY(BlueprintReadWrite,Category = "My Variables")
	float myFloat;

	UFUNCTION(BlueprintCallable,Category = "My Functions")
	void myFunction();

};
