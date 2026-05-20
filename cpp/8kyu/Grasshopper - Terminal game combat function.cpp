int combat(int health, int damage){
  return (damage > health) ? 0 : health - damage ;
}