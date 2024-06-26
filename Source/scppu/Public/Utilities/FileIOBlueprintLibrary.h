

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileIOBlueprintLibrary.generated.h"

UCLASS(meta = (DisplayName = "File IO Blueprint Library"))
class SCPPU_API UFileIOBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	//// Functions ////	
public:
	UFUNCTION(BlueprintCallable)
		static bool LoadFileToArray(FString Filename, TArray<uint8>& Result);

	UFUNCTION(BlueprintCallable)
		static bool LoadFileToString(FString Filename, FString& Result);

	UFUNCTION(BlueprintCallable)
		static bool SaveArrayToFile(FString Filename, bool bUseAppendMode, TArray<uint8> Array);

	UFUNCTION(BlueprintCallable)
		static bool SaveStringToFile(FString Filename, bool bUseAppendMode, FString String);

	UFUNCTION(BlueprintCallable)
		static void FindFiles(FString Directory, bool bFindFiles, bool bFindDirectories, TArray<FString>& Result);


};
