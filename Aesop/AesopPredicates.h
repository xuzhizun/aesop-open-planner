/// @file AesopPredicates.h
/// @brief Definition of Predicates interface class.

#ifndef _AE_PREDICATES_H_
#define _AE_PREDICATES_H_

namespace Aesop {
   /// @brief A set of Predicates defined in a particular planning problem.
   /// @ingroup Aesop
   class Predicates {
   public:
      /// @brief Type that identifies a predicate.
      typedef unsigned int predID;
      /// @brief Constant for null predicate.
      static const predID NullPredicate = -1;

      /// @brief Number of predicates we define.
      /// @return Number of predicates defined.
      virtual unsigned int size() const = 0;

      /// @brief Do we have this predicate?
      /// @param[in] pred Look for predicates with this identifier.
      /// @return True iff we have a predicate with that identifier.
      virtual bool has(predID pred) const = 0;

      /// @brief Boolean comparison fails unless subclasses override this
      ///        operator.
      virtual bool operator==(const Predicates &other) const { return false; }
      virtual bool operator!=(const Predicates &other) const { return true; }

   protected:
      /// @brief Alternate name for has method.
      /// @see Predicates::has
      bool have(predID pred) const { return has(pred); }

   private:
   };
};

#endif
