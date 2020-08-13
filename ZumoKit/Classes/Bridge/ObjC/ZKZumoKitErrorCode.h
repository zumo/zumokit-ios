// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from errors.djinni

#import <Foundation/Foundation.h>

/**
 * The code of error returned. Some errors that could be handled programmatically (e.g., balance too low)
 * include an error code — a short string with a brief explanation — as a value for code.
 * See <a href="https://developers.zumo.money/docs/guides/handling-errors">Handling Errors</a> for details.
 */
@interface ZKZumoKitErrorCode : NSObject
- (nonnull instancetype)init;
+ (nonnull instancetype)zumoKitErrorCode;

@end

/** Unknown error has occured. */
extern NSString * __nonnull const ZKZumoKitErrorCodeUNKNOWNERROR;
/** New account could not be created. Account already exists. */
extern NSString * __nonnull const ZKZumoKitErrorCodeACCOUNTLIMITEXCEEDED;
/** Could not make user Modulr customer. User is already Modulr customer. */
extern NSString * __nonnull const ZKZumoKitErrorCodeALREADYMODULRCUSTOMER;
/** Requested account not found. */
extern NSString * __nonnull const ZKZumoKitErrorCodeACCOUNTNOTFOUND;
/** Amount not set. Either send max has to be enabled or send max set. */
extern NSString * __nonnull const ZKZumoKitErrorCodeAMOUNTNOTSET;
/** Invalid response received from ZumoKit API. */
extern NSString * __nonnull const ZKZumoKitErrorCodeAPISERVICEERROR;
/** Bitcoin amount exceeds maximum 63 bit precision. */
extern NSString * __nonnull const ZKZumoKitErrorCodeBITCOINAMOUNTOVERFLOW;
/** Requested change account not found. */
extern NSString * __nonnull const ZKZumoKitErrorCodeCHANGEACCOUNTNOTFOUND;
/** Change output index out of range. */
extern NSString * __nonnull const ZKZumoKitErrorCodeCHANGEINDEXOUTOFRANGE;
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
/** Exchange currencies must be different. */
extern NSString * __nonnull const ZKZumoKitErrorCodeEXCHANGECURRENCIESMUSTBEDIFFERENT;
/** Exchange amount too low. Fees exceed return value. */
extern NSString * __nonnull const ZKZumoKitErrorCodeEXCHANGERETURNVALUENEGATIVE;
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
/** Insufficient funds for transaction value and fee. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINSUFFICIENTFUNDS;
/** Insufficient funds for exchange value. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINSUFFICIENTFUNDSFOREXCHANGE;
/** Insufficient funds for transaction value. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINSUFFICIENTFUNDSFORTRANSACTION;
/** Account type not supported by the operation. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDACCOUNTTYPE;
/** Destination address is invalid. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDADDRESS;
/** Invalid response received from API. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDAPIRESPONSE;
/** Invalid or missing exchange deposit address. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDEXCHANGEDEPOSITADDRESS;
/** Mismatch between exchange rate and selected deposit/withdraw accounts. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDEXCHANGERATE;
/** Mismatch between exchange settings and selected deposit/withdraw accounts. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDEXCHANGESETTINGS;
/** Invalid fee rate. Fee rate should be an integer value. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDFEERATE;
/** Requested private key derivation path is invalid. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDHDWALLETPATH;
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
/** Invalid response received from WebSocket. */
extern NSString * __nonnull const ZKZumoKitErrorCodeINVALIDWEBSOCKETRESPONSE;
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
/** Something went wrong signing transaction. */
extern NSString * __nonnull const ZKZumoKitErrorCodeSIGNINGERROR;
/** Transaction amount too small to send. */
extern NSString * __nonnull const ZKZumoKitErrorCodeTRANSACTIONAMOUNTTOOSMALL;
/** Invalid response received from ZumoKit Transaction Service API. */
extern NSString * __nonnull const ZKZumoKitErrorCodeTRANSACTIONSERVICEERROR;
/** Resulting transaction is too large. */
extern NSString * __nonnull const ZKZumoKitErrorCodeTRANSACTIONTOOLARGE;
/** Fiat account could no be created. User is not yet a Modulr customer on selected network. */
extern NSString * __nonnull const ZKZumoKitErrorCodeUSERNOTMODULRCUSTOMER;
/** Unspent transaction output could not be signed. */
extern NSString * __nonnull const ZKZumoKitErrorCodeUTXOSIGNINGERROR;
/** Cannot set value when send max enabled. */
extern NSString * __nonnull const ZKZumoKitErrorCodeVALUEPROVIDEDWHENSENDMAXSET;
/** Wallet could not be created. Wallet already exists. */
extern NSString * __nonnull const ZKZumoKitErrorCodeWALLETLIMITEXCEEDED;
