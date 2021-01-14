#pragma once
#include <string>
#include <stdint.h>
#include <assert.h>
#include <cheap_map.h>

class ModuleIndex
{
 public:
    typedef uint16_t num_t;
 protected:
    num_t idx; //  (MSB) 5 bit unused, 2 bit sfp, 5 bit module, 4 bit channel (LSB)
    // packed tight as we want to use it as array index
protected:
  static constexpr num_t ANY_=(8<<9);
  static constexpr num_t INVALID_=(8<<9)+1;

public:
  static constexpr const num_t SIZE = 4*32*16;
  static const ModuleIndex ANY ; //special value, not valid as index
  static const ModuleIndex INVALID ; //special value, not valid as index

  constexpr inline ModuleIndex(uint8_t sfp, uint8_t mod, uint8_t ch):  idx((sfp<<9)+(mod<<4)+ch)
  {
  }

  constexpr inline ModuleIndex(num_t idx): idx(idx) {}

  constexpr inline ModuleIndex(): idx(INVALID_) {}

  inline operator num_t() const
  {
    assert(idx<SIZE);
    return this->idx;
  }

  inline uint8_t getSFP() const
  {
    return  (idx>>9);
  }

  inline uint8_t getMod() const 
  {
    return  ((idx>>4) & 0x1f);
  }

  inline uint8_t getCh() const
  {
    return  (idx       & 0x0f );
  }
  
  inline bool operator==(const ModuleIndex b)  const
  {
    return this->idx==b.idx;
  }
  std::string getPath() const;  //boost::format eats up a lot of compile time, and 
  std::string toString() const; // we do not need to inline these functions -> ModuleIndex.cxx

  template<class Value>
  using  Map=cheap_map<ModuleIndex, Value, SIZE>;
  static const int nIdx=1;
};

class GlobalIndex // pseudo index for global histograms
{
 public:
  GlobalIndex() {}

  
  GlobalIndex(ModuleIndex i)
  {
  };
    typedef char num_t;
    static constexpr const num_t SIZE = 1;

  inline bool operator==(const GlobalIndex b)  const
  {
    return true;
  }
  inline operator num_t() const
  {
    return 0;
  }
  template<class Value>
  using  Map=cheap_map<GlobalIndex, Value, SIZE>;  
  static const int nIdx=0;
};

