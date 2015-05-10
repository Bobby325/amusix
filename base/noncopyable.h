#ifndef AMUSIX_BASE_NONCOPYABLE_H
#define AMUSIX_BASE_NONCOPYABLE_H

namespace amusix {

//  Private copy constructor and copy assignment ensure classes derived from
//  class noncopyable cannot be copied.

namespace noncopyable_  // protection from unintended ADL
{
  class noncopyable
  {
   protected:
      noncopyable() {}
      ~noncopyable() {}
   private:  // emphasize the following members are private
      noncopyable( const noncopyable& );
      const noncopyable& operator=( const noncopyable& );
  };
}

typedef noncopyable_::noncopyable noncopyable;

} // namespace amusix

#endif // AMUSIX_BASE_NONCOPYABLE_H

