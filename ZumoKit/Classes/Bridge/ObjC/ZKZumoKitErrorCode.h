// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from errors.djinni

#import <Foundation/Foundation.h>

/**
 * The code of error returned. Some errors that could be handled programmatically (e.g., balance too low)
 * include an error code — a short string with a brief explanation — as a value for code.
 * See <a target="_top" href="https://developers.zumo.money/docs/guides/handling-errors">Handling Errors</a> for details.
 */
@interface ZKZumoKitErrorCode : NSObject
- (nonnull instancetype)init;
+ (nonnull instancetype)zumoKitErrorCode;

@end

/** Unknown error has occured. */
extern NSString * __nonnull const ZKZumoKitErrorCodeUNKNOWNERROR;
/** New account could not be created. Account already exists. */
extern NSString * __nonnull const ZKZumoKitErrorCodeACCOUNTLIMITEXCEEDED;
/** Could not make user fiat customer. User is already fiat customer. */
extern NSString * __nonnull const ZKZumoKitErrorCodeALREADYFIATCUSTOMER;
/** Requested account not found. */
extern NSString * __nonnull const ZKZumoKitErrorCodeACCOUNTNOTFOUND;
/** Amount not set. Either send max has to be enabled or send max set. */
extern NSString * __nonnull const ZKZumoKitErrorCodeAMOUNTNOTSET;
/** Invalid response received from ZumoKit API. */
extern NSString * __nonnull const ZKZumoKitErrorCodeAPISERVICEERROR;
/** Requested card not found. */
extern NSString * __nonnull const ZKZumoKitErrorCodeCARDNOTFOUND;
/** Invalid response received from ZumoKit Card Service API. */
extern NSString * __nonnull const ZKZumoKitErrorCodeCARDSERVICEERROR;
/** Requested change account not found. */
extern NSString * __nonnull const ZKZumoKitErrorCodeCHANGEACCOUNTNOTFOUND;
/** Change output index out of range. */
extern NSString * __nonnull const ZKZumoKitErrorCodeCHANGEINDEXOUTOFRANGE;
/** Currency not supported. */
extern NSString * __nonnull const ZKZumoKitErrorCodeCURRENCYNOTSUPPORTED;
/**
 * Transaction data overflow.
 * Maximum data size supported by RLP encoding exceeds 16000000 bytes.
 */
extern NSString * __nonnull const ZKZumoKitErrorCodeDATAOVERFLOW;
/** Cannot set data when send max enabled. */
extern NSString * __nonnull const ZKZumoKitErrorCodeDATAPROVIDEDWHENSENDMAXSET;
/** Destination cannot be set when withdrawing funds to nominated account. */
extern NSString * __nonnull const ZKZumoKitErrorCodeDESTINATIONPROVIDEDWHENWITHDRAWSET;
/** Exchange amount too low. */
extern NSString * __nonnull const ZKZumoKitErrorCodeEXCHANGEAMOUNTTOOLOW;
/** Ethereum transaction data is not supported yet. */
extern NSString * __nonnull const ZKZumoKitErrorCodeETHEREUMTRANSACTIONDATANOTSUPPORTED;
/** Exchange amount too low. Fees exceed return value. */
extern NSString * __nonnull const ZKZumoKitErrorCodeEXCHANGERETURNVALUENEGATIVE;
/** Invalid account provided. Fiat accounted expected. */
extern NSString * __nonnull const ZKZumoKitErrorCodeFIATACCOUNTEXPECTED;
/** Gas too long. Cumulative gas limit and gas price should not exceed 30 bytes. */
extern NSString * __nonnull const ZKZumoKitErrorCodeGASOVERFLOW;
/** Gas too low. Gas price and gas limit should be higher than 0. */
extern NSString * __nonnull const ZKZumoKitErrorCodeGASTOOLOW;
/** Change account and source accounts have to be on the same network. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINCOMPATIBLENETWORKTYPES;
/**
 * Unknown error has occured
 * Incorrect account selected.
 * Account currency does not match the requeirements of requested operation.
 */
extern NSString * __nonnull const ZKZumoKitErrorCodeINCORRECTACCOUNTSELECTED;
/**
 * Incorrect change account selected.
 * Change account should be Bitcoin account on the same network as source account
 */
extern NSString * __nonnull const ZKZumoKitErrorCodeINCORRECTCHANGEACCOUNTSELECTED;
/** Insufficient funds for exchange value and network fees. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINSUFFICIENTFUNDSFOREXCHANGE;
/** Insufficient funds for transaction value and network fees. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINSUFFICIENTFUNDSFORTRANSACTION;
/** Value exceeds maximum 63 bit precision. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINT64OVERFLOW;
/** Account type not supported by the operation. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDACCOUNTTYPE;
/** Destination address is invalid. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDADDRESS;
/** Invalid response received from API. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDAPIRESPONSE;
/** Mismatch between exchange rate quote and selected accounts. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDQUOTE;
/** Exchange pair not supported. */
extern NSString * __nonnull const ZKZumoKitErrorCodeEXCHANGEPAIRNOTSUPPORTED;
/** Requested private key derivation path is invalid. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDHDWALLETPATH;
/** Invalid metadata. Metadata must be a valid JSON. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDMETADATA;
/** Invalid mnemonic phrase. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDMNEMONIC;
/**
 * Invalid length of mnemonic phrase.
 * Mnemonic phrase should be 12, 15, 18, 21 or 24 words long.
 */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDMNEMONICWORDCOUNT;
/** Network type not supported by requested operation. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDNETWORKTYPE;
/** "Incorrect password provided. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDPASSWORD;
/** "The provided recovery phrase does not correspond to existing wallet." */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDRECOVERYPHRASE;
/** Invalid transaction type. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDTRANSACTIONTYPE;
/** Invalid transaction value. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDTRANSACTIONVALUE;
/** Invalid user token set. User token set should be a valid stringified JSON with accessToken, refreshToken and expiresIn properties. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDUSERTOKENSET;
/** Invalid response received from WebSocket. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDWEBSOCKETRESPONSE;
/** Exchange already submitted. */
extern NSString * __nonnull const ZKZumoKitErrorCodeKNOWNEXCHANGE;
/** Transaction already submitted. */
extern NSString * __nonnull const ZKZumoKitErrorCodeKNOWNTRANSACTION;
/** No destination address. In case no transaction data is provided, destination address is obligatory. */
extern NSString * __nonnull const ZKZumoKitErrorCodeNODESTINATIONADDRESS;
/** No nominated account found. */
extern NSString * __nonnull const ZKZumoKitErrorCodeNONOMINATEDACCOUNTFOUND;
/** Requested operation requies existance of a wallet. No wallet was found. */
extern NSString * __nonnull const ZKZumoKitErrorCodeNOWALLETFOUND;
/** Nonce too long. Maximum supported nonce size is 32 bytes. */
extern NSString * __nonnull const ZKZumoKitErrorCodeNONCEOVERFLOW;
/** User session has expired. */
extern NSString * __nonnull const ZKZumoKitErrorCodeNOTAUTHORIZED;
/** Insufficient funds to pay the transaction fee. */
extern NSString * __nonnull const ZKZumoKitErrorCodeSENDMAXINSUFFICIENTFUNDSFORFEE;
/** Transaction amount is too small to send after the fee has been deducted. */
extern NSString * __nonnull const ZKZumoKitErrorCodeSENDMAXINSUFFICIENTFUNDSFORTRANSACTION;
/** Exchange amount is insufficient to make a minimum exchange. */
extern NSString * __nonnull const ZKZumoKitErrorCodeSENDMAXINSUFFICIENTFUNDSFOREXCHANGE;
/** Something went wrong signing transaction. */
extern NSString * __nonnull const ZKZumoKitErrorCodeSIGNINGERROR;
/** Transaction amount exceeds maximum precision. */
extern NSString * __nonnull const ZKZumoKitErrorCodeTRANSACTIONAMOUNTOVERFLOW;
/** Transaction amount too small to send. */
extern NSString * __nonnull const ZKZumoKitErrorCodeTRANSACTIONAMOUNTTOOSMALL;
/** Invalid response received from ZumoKit Transaction Service API. */
extern NSString * __nonnull const ZKZumoKitErrorCodeTRANSACTIONSERVICEERROR;
/** Resulting transaction is too large. */
extern NSString * __nonnull const ZKZumoKitErrorCodeTRANSACTIONTOOLARGE;
/** Fiat account could no be created. User is not yet a fiat customer on selected network. */
extern NSString * __nonnull const ZKZumoKitErrorCodeUSERNOTFIATCUSTOMER;
/** Unspent transaction output could not be signed. */
extern NSString * __nonnull const ZKZumoKitErrorCodeUTXOSIGNINGERROR;
/** Cannot set amount when send max enabled. Set amount to null if trying t send maximum funds. */
extern NSString * __nonnull const ZKZumoKitErrorCodeAMOUNTPROVIDEDWHENSENDMAXSET;
/** Wallet could not be created. Wallet already exists. */
extern NSString * __nonnull const ZKZumoKitErrorCodeWALLETLIMITEXCEEDED;
