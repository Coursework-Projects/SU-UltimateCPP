// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObject.h"

UMyObject::UMyObject()
{
	myFloat = 38.5;
}

void UMyObject::myFunction()
{
	UE_LOG(LogTemp, Warning, TEXT("This is our warning text!"));
}