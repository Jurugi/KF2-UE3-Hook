/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Core_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct Core.Object.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                C;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                D;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Pointer
// 0x0008
struct FPointer
{
	int                                                Dummy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) MISSED OFFSET
};

// ScriptStruct Core.Object.Array_Mirror
// 0x0010
struct FArray_Mirror
{
	struct FPointer                                    Data;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                ArrayNum;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ArrayMax;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InlinePointerArray_Mirror
// 0x0018
struct FInlinePointerArray_Mirror
{
	struct FPointer                                    InlineData;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FArray_Mirror                               SecondaryData;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Rotator
// 0x000C
struct FRotator
{
	int                                                Pitch;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Roll;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Plane
// 0x0004(0x0010 - 0x000C)
struct FPlane : FVector
{
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Vector4
// 0x0010
struct FVector4
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              G;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              B;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              A;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      G;                                                		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      R;                                                		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      A;                                                		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointVector2D
// 0x001D
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   OutVal;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ArriveTangent;                                    		// 0x000C (0x0008) [0x0000000000000000]              
	struct FVector2D                                   LeaveTangent;                                     		// 0x0014 (0x0008) [0x0000000000000000]              
	unsigned char                                      InterpMode;                                       		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurveVector2D
// 0x0011
struct FInterpCurveVector2D
{
	TArray< struct FInterpCurvePointVector2D >         Points;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointFloat
// 0x0011
struct FInterpCurvePointFloat
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              OutVal;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ArriveTangent;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              LeaveTangent;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      InterpMode;                                       		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurveFloat
// 0x0011
struct FInterpCurveFloat
{
	TArray< struct FInterpCurvePointFloat >            Points;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Cylinder
// 0x0008
struct FCylinder
{
	float                                              Radius;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointVector
// 0x0029
struct FInterpCurvePointVector
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     OutVal;                                           		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     ArriveTangent;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     LeaveTangent;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	unsigned char                                      InterpMode;                                       		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurveVector
// 0x0011
struct FInterpCurveVector
{
	TArray< struct FInterpCurvePointVector >           Points;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Quat
// 0x0010
struct FQuat
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FPlane                                      YPlane;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FPlane                                      ZPlane;                                           		// 0x0020 (0x0010) [0x0000000000000000]              
	struct FPlane                                      WPlane;                                           		// 0x0030 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Core.Object.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     BoxExtent;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              SphereRadius;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                               		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     v2;                                               		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Core.Object.TAlphaBlend
// 0x0015
struct FTAlphaBlend
{
	float                                              AlphaIn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              AlphaOut;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              AlphaTarget;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              BlendTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              BlendTimeToGo;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      BlendType;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.BoneAtom
// 0x0020
struct FBoneAtom
{
	struct FQuat                                       Rotation;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FVector                                     Translation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.OctreeElementId
// 0x000C
struct FOctreeElementId
{
	struct FPointer                                    Node;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                ElementIndex;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.RenderCommandFence
// 0x0004
struct FRenderCommandFence
{
	int                                                NumPendingFences;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.RawDistribution
// 0x001C
struct FRawDistribution
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Op;                                               		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      LookupTableNumElements;                           		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      LookupTableChunkSize;                             		// 0x0003 (0x0001) [0x0000000000000000]              
	TArray< float >                                    LookupTable;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
	float                                              LookupTableTimeScale;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              LookupTableStartTime;                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointLinearColor
// 0x0035
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                OutVal;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                ArriveTangent;                                    		// 0x0014 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                LeaveTangent;                                     		// 0x0024 (0x0010) [0x0000000000000000]              
	unsigned char                                      InterpMode;                                       		// 0x0034 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurveLinearColor
// 0x0011
struct FInterpCurveLinearColor
{
	TArray< struct FInterpCurvePointLinearColor >      Points;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointQuat
// 0x0041
struct FInterpCurvePointQuat
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0004 (0x000C) MISSED OFFSET
	struct FQuat                                       OutVal;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FQuat                                       ArriveTangent;                                    		// 0x0020 (0x0010) [0x0000000000000000]              
	struct FQuat                                       LeaveTangent;                                     		// 0x0030 (0x0010) [0x0000000000000000]              
	unsigned char                                      InterpMode;                                       		// 0x0040 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurveQuat
// 0x0011
struct FInterpCurveQuat
{
	TArray< struct FInterpCurvePointQuat >             Points;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointTwoVectors
// 0x004D
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FTwoVectors                                 OutVal;                                           		// 0x0004 (0x0018) [0x0000000000000000]              
	struct FTwoVectors                                 ArriveTangent;                                    		// 0x001C (0x0018) [0x0000000000000000]              
	struct FTwoVectors                                 LeaveTangent;                                     		// 0x0034 (0x0018) [0x0000000000000000]              
	unsigned char                                      InterpMode;                                       		// 0x004C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurveTwoVectors
// 0x0011
struct FInterpCurveTwoVectors
{
	TArray< struct FInterpCurvePointTwoVectors >       Points;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Box
// 0x0019
struct FBox
{
	struct FVector                                     Min;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Max;                                              		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned char                                      IsValid;                                          		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.TPOV
// 0x001C
struct FTPOV
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              FOV;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.SHVector
// 0x0030
struct FSHVector
{
	float                                              V[ 0x9 ];                                         		// 0x0000 (0x0024) [0x0000000000000000]              
	float                                              Padding[ 0x3 ];                                   		// 0x0024 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Core.Object.SHVectorRGB
// 0x0090
struct FSHVectorRGB
{
	struct FSHVector                                   R;                                                		// 0x0000 (0x0030) [0x0000000000000000]              
	struct FSHVector                                   G;                                                		// 0x0030 (0x0030) [0x0000000000000000]              
	struct FSHVector                                   B;                                                		// 0x0060 (0x0030) [0x0000000000000000]              
};

// ScriptStruct Core.Object.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.PackedNormal
// 0x0004
struct FPackedNormal
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      W;                                                		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.IndirectArray_Mirror
// 0x0010
struct FIndirectArray_Mirror
{
	struct FPointer                                    Data;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                ArrayNum;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ArrayMax;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.FColorVertexBuffer_Mirror
// 0x001C
struct FFColorVertexBuffer_Mirror
{
	struct FPointer                                    VfTable;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    VertexData;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                Data;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Stride;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                NumVertices;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.RenderCommandFence_Mirror
// 0x0004
struct FRenderCommandFence_Mirror
{
	int                                                NumPendingFences;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.UntypedBulkData_Mirror
// 0x0040
struct FUntypedBulkData_Mirror
{
	struct FPointer                                    VfTable;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                BulkDataFlags;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ElementCount;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                BulkDataOffsetInFile;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                BulkDataSizeOnDisk;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                SavedBulkDataFlags;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                SavedElementCount;                                		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                SavedBulkDataOffsetInFile;                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                SavedBulkDataSizeOnDisk;                          		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FPointer                                    BulkData;                                         		// 0x0028 (0x0008) [0x0000000000000000]              
	int                                                LockStatus;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FPointer                                    AttachedAr;                                       		// 0x0034 (0x0008) [0x0000000000000000]              
	int                                                bShouldFreeOnEmpty;                               		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.BitArray_Mirror
// 0x0020
struct FBitArray_Mirror
{
	struct FPointer                                    IndirectData;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                InlineData[ 0x4 ];                                		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                NumBits;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                MaxBits;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.SparseArray_Mirror
// 0x0038
struct FSparseArray_Mirror
{
	TArray< int >                                      Elements;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FBitArray_Mirror                            AllocationFlags;                                  		// 0x0010 (0x0020) [0x0000000000000000]              
	int                                                FirstFreeIndex;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                NumFreeIndices;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Set_Mirror
// 0x0048
struct FSet_Mirror
{
	struct FSparseArray_Mirror                         Elements;                                         		// 0x0000 (0x0038) [0x0000000000000000]              
	int                                                InlineHash;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Hash;                                             		// 0x003C (0x0008) [0x0000000000000000]              
	int                                                HashSize;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.MultiMap_Mirror
// 0x0048
struct FMultiMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                            		// 0x0000 (0x0048) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Map_Mirror
// 0x0048
struct FMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                            		// 0x0000 (0x0048) [0x0000000000000000]              
};

// ScriptStruct Core.Object.ThreadSafeCounter
// 0x0004
struct FThreadSafeCounter
{
	int                                                Value;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Double
// 0x0008
struct FDouble
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.IpAddr
// 0x0014
struct FIpAddr
{
	int                                                AddrA;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AddrB;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AddrC;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                AddrD;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Port;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.QWord
// 0x0008
struct FQWord
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.HatPointer
// 0x0008
struct FHatPointer
{
	int                                                Dummy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) MISSED OFFSET
};

// ScriptStruct Core.Object.dword
// 0x0004
struct Fdword
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.DistributionFloat.RawDistributionFloat
// 0x0008(0x0024 - 0x001C)
struct FRawDistributionFloat : FRawDistribution
{
	class UDistributionFloat*                          Distribution;                                     		// 0x001C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Core.DistributionFloat.MatineeRawDistributionFloat
// 0x0008(0x002C - 0x0024)
struct FMatineeRawDistributionFloat : FRawDistributionFloat
{
	float                                              MatineeValue;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	DWORD                                              bInMatinee : 1;                                   		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Core.DistributionVector.RawDistributionVector
// 0x0008(0x0024 - 0x001C)
struct FRawDistributionVector : FRawDistribution
{
	class UDistributionVector*                         Distribution;                                     		// 0x001C (0x0008) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif