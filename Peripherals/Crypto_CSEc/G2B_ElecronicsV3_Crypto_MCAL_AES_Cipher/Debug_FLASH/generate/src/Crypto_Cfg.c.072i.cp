
IPA constant propagation start:

IPA structures before propagation:

Jump functions:

 Propagating constants:


overall_size: 0, max_new_size: 11001

IPA lattices after all propagation:

Lattices:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Crypto_aObjectQueueList/7 (Crypto_aObjectQueueList) @06856510
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
Crypto_au8NvramBlob1/6 (Crypto_au8NvramBlob1) @068564c8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_aKeyElementList/4 (addr)Crypto_aKeyElementList/4 (addr)
  Availability: available
  Varpool flags:
Crypto_au8NvramBlob0/5 (Crypto_au8NvramBlob0) @06856480
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
Crypto_aKeyElementList/4 (Crypto_aKeyElementList) @06856438
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Crypto_au8NvramBlob1/6 (addr)Crypto_au8NvramBlob1/6 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_aKeyList/3 (Crypto_aKeyList) @06856360
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Crypto_au32KeyElementList_CryptoKey_0/0 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_aDriverObjectList/2 (Crypto_aDriverObjectList) @06856318
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Crypto_aPrimitives_CryptoDriverObject_AES_ECB/1 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_aPrimitives_CryptoDriverObject_AES_ECB/1 (Crypto_aPrimitives_CryptoDriverObject_AES_ECB) @068562d0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_aDriverObjectList/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_au32KeyElementList_CryptoKey_0/0 (Crypto_au32KeyElementList_CryptoKey_0) @068561f8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_aKeyList/3 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
